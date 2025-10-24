/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 03:31:24 by victode-          #+#    #+#             */
/*   Updated: 2025/10/24 22:16:39 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		b;
	unsigned char		*byte;

	i = 0;
	b = (unsigned char)c;
	byte = (unsigned char *)s;
	while (i < n)
	{
		if (byte[i] == b)
			return ((void *)byte + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char *s = "Hello World!";

	printf("Result: %s;\n", (char *)ft_memchr(s, 'W', 7));
}
*/