/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:59:24 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 18:53:38 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		t = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		*lst = t;
	}
	*lst = NULL;
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *list = NULL;
//  ft_lstadd_back(&list, ft_lstnew(ft_strdup("first")));
//  ft_lstadd_back(&list, ft_lstnew(ft_strdup("second")));
//  ft_lstadd_back(&list, ft_lstnew(ft_strdup("third")));
//
//  printf("Before clear - size: %d\n", ft_lstsize(list));
//  ft_lstclear(&list, free);
//  printf("After clear - list: %s\n", list ? "not NULL" : "NULL");
//  return (0);
// }