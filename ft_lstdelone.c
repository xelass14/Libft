/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:10:37 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 17:36:17 by albranco         ###   ########.fr       */
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
// 	t_list *node = ft_lstnew(ft_strdup("test"));
//
//  printf("Before deletion: content = %s\n", (char *)node->content);
//  ft_lstdelone(node, free);
//  printf("Node deleted successfully\n");
//  return (0);
// }