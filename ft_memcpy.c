/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 01:52:29 by victode-          #+#    #+#             */
/*   Updated: 2025/08/29 14:39:57 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*src_byte;
	char		*dst_byte;

	i = 0;
	src_byte = (const char *)src;
	dst_byte = (char *)dest;
	if (!dst_byte && !src_byte)
		return (NULL);
	while (i < n)
	{
		dst_byte[i] = src_byte[i];
		i++;
	}
	return (dest);
}
