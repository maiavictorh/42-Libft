/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:09:32 by victode-          #+#    #+#             */
/*   Updated: 2025/09/01 18:19:41 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	unsigned int	str_len;
	char			*sub;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	size = str_len - start;
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > size)
		len = size;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
