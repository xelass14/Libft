/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 18:55:34 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 16:31:50 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		content = f(lst -> content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			del(content);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst -> next;
	}
	return (newlist);
}

// #include <stdio.h>

// void	ft_str_tolower(char *str)
// {
// 	if (!str)
// 		return ;
// 	while (*str)
// 	{
// 		*str = ft_tolower(*str);
// 		str++;
// 	}
// }

// int	main(void)
// {
// 	t_list	*lista = ft_lstnew(ft_strdup("A"));
// 	t_list	*lista2 = ft_lstnew(ft_strdup("B"));
// 	t_list	*lista3 = ft_lstnew(ft_strdup("C"));

// 	ft_lstadd_back(&lista, lista2);
// 	ft_lstadd_back(&lista, lista3);

// 	ft_lstmap(lista, (void*)ft_str_tolower, (void *)free);
// 	while (lista)
// 	{
// 		printf("%s\n", (char *) lista -> content);
// 		lista = lista -> next;
// 	}
// }