/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:30:51 by albranco          #+#    #+#             */
/*   Updated: 2026/11/19 10:42:33 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	b;

	i = 0;
	a = (unsigned char *) s;
	b = (unsigned char) c;
	while (i < n)
	{
		if (a[i] == b)
			return (&a[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s[] = "Hello World";
// 	int c = 'W';
// 	size_t n = 11;
// 	void *res = ft_memchr(s, c, n);
// 	if (res)
// 		printf("ft_memchr found '%c' at %ld\n", c, (char *)res - s);
// 	else
// 		printf("ft_memchr not found\n");
// }
