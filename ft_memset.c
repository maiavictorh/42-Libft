/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:27:10 by victode-          #+#    #+#             */
/*   Updated: 2025/10/24 14:34:42 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*byte;

	byte = s;
	while (n--)
		*byte++ = c;
	return (s);
}
/*
int main(void)
{
	char s[] = "Hello World!";
	printf("Result: %s;\n", ft_memset(s, '-', 4));
}
*/