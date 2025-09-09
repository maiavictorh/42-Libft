/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 02:19:51 by victode-          #+#    #+#             */
/*   Updated: 2025/09/01 00:58:35 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*src_byte;
	char		*dst_byte;

	i = 0;
	src_byte = (const char *)src;
	dst_byte = (char *)dest;
	if (src < dest)
	{
		i = n;
		while (i--)
			dst_byte[i] = src_byte[i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
