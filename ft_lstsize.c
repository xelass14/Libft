/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:27:20 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 13:23:38 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (lst == NULL)
		return (0);
	i = 1;
	while (lst -> next != NULL)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*lista = ft_lstnew("A");
// 	t_list	*lista2 = ft_lstnew("B");
// 	t_list	*lista3 = ft_lstnew("C");

// 	ft_lstadd_back(&lista, lista2);
// 	ft_lstadd_back(&lista, lista3);
// 	printf("%d", ft_lstsize(lista));
// }