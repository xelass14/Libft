/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:10:56 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 13:30:29 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new -> next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*lista = ft_lstnew("A");
// 	ft_lstadd_back(&lista, ft_lstnew("B"));

// 	t_list	*editada = lista;
// 	while (editada)
// 	{
// 		printf("%s",(char *)editada -> content);
// 		editada = editada -> next;
// 	}

// 	printf("\n");
// 	ft_lstadd_front(&lista, ft_lstnew("C"));

// 	editada = lista;
// 	while (editada)
// 	{
// 		printf("%s",(char *)editada -> content);
// 		editada = editada -> next;
// 	}
// }