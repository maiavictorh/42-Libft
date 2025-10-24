/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:59:40 by victode-          #+#    #+#             */
/*   Updated: 2025/10/24 23:42:41 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	if (n == 0)
		return (0);
	i = 0;
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	while (b1[i] == b2[i] && i < n - 1)
		i++;
	return (b1[i] - b2[i]);
}
/*
int main(void)
{
	char *s1 = "Hello world!";
	char *s2 = "Hello World!";

	printf("Result: %d;\n", ft_memcmp(s1, s2, 7));
}
*/