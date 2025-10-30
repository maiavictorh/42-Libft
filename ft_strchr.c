/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:00:31 by victode-          #+#    #+#             */
/*   Updated: 2025/10/29 17:27:22 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to locate (interpreted as unsigned char).
 * @return A pointer to the first occurrence of c, or NULL if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
	const char *s = "Hello World!";

	printf("Result: %s;\n", ft_strchr(s, 'o'));
}
*/