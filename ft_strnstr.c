/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 00:25:18 by victode-          #+#    #+#             */
/*   Updated: 2025/10/25 00:12:21 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == 0)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while ((i + j) < len && little[j] && little[j] == big[i + j])
			j++;
		if (little[j] == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char *big = "Hello people of the world!";
	char *little = "of";
	char *result = ft_strnstr(big, little, 15);
	printf("Big: %s;\nLittle: %s;\nResult: %s;\n", big, little, result);
}
*/