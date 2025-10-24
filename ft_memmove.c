/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 02:19:51 by victode-          #+#    #+#             */
/*   Updated: 2025/10/24 15:34:10 by victode-         ###   ########.fr       */
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
/*
int main(void)
{
	char s[] = "Howdy World!";

	// Normal case:
	printf("Before: %s;\n", s);
	ft_memmove(s, "Hello", 5);
	printf("Result: %s;\n", s);

	char s2[] = "abcdefgh";

	// Overlapping shift left:
	printf("Before: %s;\n", s2);
	ft_memmove(s2, s2 + 2, 5);
	printf("Result: %s;\n", s2);

	char s3[] = "ABCDEFGH";

	// Overlapping shift right:
	printf("Before: %s;\n", s3);
	ft_memmove(s3 + 2, s3, 5);
	printf("Result: %s;\n", s3);
}
*/