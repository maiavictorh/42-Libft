/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:59:40 by victode-          #+#    #+#             */
/*   Updated: 2025/09/01 00:08:33 by victode-         ###   ########.fr       */
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
