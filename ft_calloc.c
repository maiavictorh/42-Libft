/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 00:44:46 by victode-          #+#    #+#             */
/*   Updated: 2025/10/25 00:44:19 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*byte;

	byte = malloc(nmemb * size);
	if (!byte)
		return (NULL);
	ft_bzero(byte, nmemb * size);
	return (byte);
}
