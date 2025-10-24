/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:26:16 by victode-          #+#    #+#             */
/*   Updated: 2025/10/25 00:19:22 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1)
		return (NULL);
	if (s1[0] == 0)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trim = (char *)malloc(end - start + 2);
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
		trim[i++] = s1[start++];
	trim[i] = 0;
	return (trim);
}
/*
int main(void)
{
	char *s = "----Hello World++++";
	char *set = "-+";

	printf("Before: %s;\n", s);
	char *res = ft_strtrim(s, set);
	printf("Result: %s;\n", res);
}
*/