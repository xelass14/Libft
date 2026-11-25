/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:38:08 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 13:23:54 by albranco         ###   ########.fr       */
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

// 	ft_lstiter(lista, (void *)ft_str_tolower);

// 	while (lista)
// 	{
// 		printf("%s\n", (char *) lista -> content);
// 		lista = lista -> next;
// 	}
// }