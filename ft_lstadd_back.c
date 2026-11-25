/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:59:16 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 17:06:18 by albranco         ###   ########.fr       */
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
// int main(void)
// {
// 	t_list *list = NULL;
//  ft_lstadd_back(&list, ft_lstnew("first"));
//  ft_lstadd_back(&list, ft_lstnew("second"));
//  ft_lstadd_back(&list, ft_lstnew("third"));
//
//  t_list *current = list;
//  while (current)
//  {
//      printf("[%s] -> ", (char *)current->content);
//      current = current->next;
//  }
//  printf("NULL\n");
//
//  ft_lstclear(&list, free);
//  return (0);
// }