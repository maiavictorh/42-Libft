/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:05:11 by victode-          #+#    #+#             */
/*   Updated: 2025/10/30 18:14:57 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Iterates the list ’lst’ and applies the function 'f' to the
 * content of each node.
 * Creates a new list resulting from the successive applications of
 * the function 'f'.
 * The 'del' function is used to delete the content of a node if needed.
 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function to apply to each node.
 * @param del The address of the function used to delete the content if needed.
 * @return The new list, or NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
