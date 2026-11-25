/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 11:10:48 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 11:39:05 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*dest;

	i = 0;
	str = (unsigned char *) s;
	dest = (unsigned char *) malloc(ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = str[i];
	return ((char *)dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "Hello";
// 	char *dup = ft_strdup(s);
// 	printf("ft_strdup: %s\n", dup);
// 	free(dup);
// }
