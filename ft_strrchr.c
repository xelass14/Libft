/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 08:23:40 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 14:35:35 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	l;
	char			*lf;

	l = (unsigned char) c;
	i = 0;
	lf = 0;
	while (s[i])
	{
		if ((unsigned char) s[i] == l)
			lf = (char *)&s[i];
		i++;
	}
	if (l == 0)
		return ((char *)(s + i));
	return (lf);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "Hello World";
// 	char c = 'l';
// 	char *res = ft_strrchr(s, c);
// 	if (res)
// 		printf("Found at position %zu: '%s'\n", res - s, res);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }