/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:15:39 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 11:26:59 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	l;

	l = (unsigned char) c;
	i = 0;
	while ((unsigned char) s[i] != l && s[i])
	{
		i++;
	}
	if ((unsigned char) s[i] == l)
		return ((char *)(s + i));
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "Hello World";
// 	char c = 'W';
// 	printf("ft_strchr(\"%s\", '%c') = %s\n", s, c, ft_strchr(s, c));
// }
