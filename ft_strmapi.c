/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 10:35:15 by albranco          #+#    #+#             */
/*   Updated: 2026/11/23 10:50:00 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*new;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	new = (char *)malloc(len + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = f((unsigned int)i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "Hello";
// 	char *new = ft_strmapi(s, [](unsigned int i, char c) {
// 		if (i % 2 == 0)
// 			return (ft_toupper(c));
// 		return (ft_tolower(c));
// 	});
// 	printf("ft_strmapi: %s\n", new);
// 	free(new);
// }