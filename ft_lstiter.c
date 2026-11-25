/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:38:08 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 17:50:57 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

// #include <stdio.h>
// void print_content(void *content)
// {
// 	printf("%s ", (char *)content);
// }
//
// int main(void)
// {
// 	t_list *list = NULL;
//  ft_lstadd_back(&list, ft_lstnew("first"));
//  ft_lstadd_back(&list, ft_lstnew("second"));
//  ft_lstadd_back(&list, ft_lstnew("third"));
//
//  printf("List contents: ");
//  ft_lstiter(list, print_content);
//  printf("\n");
//
//  ft_lstclear(&list, free);
//  return (0);
// }