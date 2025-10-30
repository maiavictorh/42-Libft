/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:06:10 by victode-          #+#    #+#             */
/*   Updated: 2025/10/30 17:18:52 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Calculates the length of a word in a string until a given delimiter.
 *
 * @param s The input string to check.
 * @param c The delimiter character that separates words.
 * @return The length of the word before the delimiter or end of string.
 */
static size_t	ft_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

/**
 * @brief Counts the number of words in a string separated by a given delimiter.
 *
 * @param s The input string to analyze.
 * @param c The delimiter character used to split the string.
 * @return The total number of words found in the string.
 */
static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

/**
 * @brief Splits a string into an array of substrings using
 * 		  a delimiter character.
 *
 * @param s The string to split.
 * @param c The delimiter character.
 * @return A NULL-terminated array of strings (each allocated separately),
 *         or NULL if memory allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wd_len;
	char	**split;

	split = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			wd_len = ft_word_len(s + i, c);
			split[j++] = ft_substr(s, i, wd_len);
			i += wd_len;
		}
	}
	split[j] = NULL;
	return (split);
}
/*
int main(int ac, char **av)
{
	if (ac == 3 && ft_strlen(av[2]) == 1)
	{
		char **split = ft_split(av[1], av[2][0]);

		printf("Result:\n");
		for (size_t i = 0; i < ft_word_count(av[1], av[2][0]); i++)
		{
			printf("   \"%s\"\n", split[i]);
			free(split[i]);
		}
		printf("Word count: %lu", ft_word_count(av[1], av[2][0]));
	}
	printf("\n");
}
*/