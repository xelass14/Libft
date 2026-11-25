/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 10:12:53 by albranco          #+#    #+#             */
/*   Updated: 2026/11/23 10:32:01 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s[] = "Hello World";
// 	ft_striteri(s, [](unsigned int i, char *c) {
// 		if (i % 2 == 0)
// 			*c = 'A';
// 	});
// 	printf("%s\n", s);
// }