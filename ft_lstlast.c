/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:51:58 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 16:58:22 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *list = NULL;
// 	t_list *node1 = ft_lstnew("first");
// 	t_list *node2 = ft_lstnew("second");
// 	t_list *node3 = ft_lstnew("third");
//
// 	ft_lstadd_back(&list, ft_lstnew("first"));
//  ft_lstadd_back(&list, ft_lstnew("second"));
//  ft_lstadd_back(&list, ft_lstnew("third"));
//
//  t_list *last = ft_lstlast(list);
//  if (last)
//      printf("Last node content: %s\n", (char *)last->content);
//  else
//      printf("List is empty\n");
//
//  // Test with empty list
//  t_list *empty = NULL;
//  t_list *last_empty = ft_lstlast(NULL);
//  if (last_empty == NULL)
//      printf("Empty list returns NULL correctly\n");
//
//  return (0);
// }