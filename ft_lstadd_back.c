/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:59:16 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 13:36:49 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*lista = ft_lstnew("A");
// 	ft_lstadd_front(&lista, ft_lstnew("B"));

// 	t_list	*editada = lista;
// 	while (editada)
// 	{
// 		printf("%s", (char *)editada -> content);
// 		editada = editada -> next;
// 	}

// 	printf("\n");
// 	ft_lstadd_back(&lista, ft_lstnew("C"));
// 	editada = lista;

// 	while (editada)
// 	{
// 		printf("%s", (char *)editada -> content);
// 		editada = editada -> next;
// 	}
// }