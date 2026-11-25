/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:59:24 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 13:43:47 by albranco         ###   ########.fr       */
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
// 	t_list *lista = NULL;
//  	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("A")));
//  	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("B")));
//  	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("C")));

//  	printf("Before clear - size: %d\n", ft_lstsize(lista));
//  	ft_lstclear(&lista, free);
//  	printf("After clear - lista: %s\n", lista ? "not NULL" : "NULL");
// 	 return (0);
// }