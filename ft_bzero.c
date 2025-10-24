/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 01:46:27 by victode-          #+#    #+#             */
/*   Updated: 2025/10/24 14:44:00 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int main(void)
{
	char s[] = "Hello World!";
	
	ft_bzero(s, 4);
	printf("Result: ");
	for (size_t i = 0; i < 4; i++)
		printf("%x", s[i]);
	for (size_t i = 0; i < 13; i++)
		printf("%c", s[i]);
	printf("\n");
}
*/