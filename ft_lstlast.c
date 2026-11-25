/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:51:58 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 13:24:09 by albranco         ###   ########.fr       */
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

// int	main(void)
// {
// 	t_list	*lista = ft_lstnew("A");
// 	t_list	*lista2 = ft_lstnew("B");
// 	t_list	*lista3 = ft_lstnew("C");
// 	t_list	*lastlist;

// 	ft_lstadd_back(&lista, lista2);
// 	ft_lstadd_back(&lista, lista3);

// 	lastlist =ft_lstlast(lista);
// 	printf("%s", (char *)lastlist -> content);
// }