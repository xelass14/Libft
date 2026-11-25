/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:10:37 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 13:53:40 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst -> content);
	free(lst);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*lista = ft_lstnew(ft_strdup("A"));
// 	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("B")));
// 	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("C")));

// 	t_list	*node = ft_lstlast(lista);
//  	printf("Before deletion: content = %s\n", (char *)node->content);
//  	ft_lstdelone(node, free);
//  	printf("Node deleted successfully\n");

// 	while (lista)
// 	{
// 		printf("%s", (char *)lista -> content);
// 		lista = lista -> next;
// 	}
//  	return (0);
// }