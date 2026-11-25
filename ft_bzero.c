/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 19:40:33 by albranco          #+#    #+#             */
/*   Updated: 2026/11/19 10:13:57 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s[6] = "Hello";
// 	ft_bzero(s, 3);
// 	printf("ft_bzero: ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d ", s[i]);
// 	printf("\n");
// }
