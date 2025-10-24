/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:14:22 by victode-          #+#    #+#             */
/*   Updated: 2025/10/24 22:23:23 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	if ((unsigned char)c == 0)
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
	const char *s = "Hello World!";

	printf("Result: %s;\n", ft_strrchr(s, 'o'));
}
*/