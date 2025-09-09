/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 01:56:38 by victode-          #+#    #+#             */
/*   Updated: 2025/08/31 02:26:34 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;
	size_t	buf;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (src_len + size);
	buf = size - dst_len - 1;
	if (size > 0)
	{
		i = dst_len;
		j = 0;
		while (src[j] && j < buf)
			dst[i++] = src[j++];
		dst[i] = 0;
	}
	return (dst_len + src_len);
}
