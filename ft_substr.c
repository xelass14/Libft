/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 10:59:05 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 11:36:56 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	size_t	newlen;
	char	*new;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		newlen = slen - start;
	else
		newlen = len;
	new = (char *) malloc(newlen + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < newlen)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "Hello World";
// 	char *sub = ft_substr(s, 6, 5);
// 	printf("ft_substr: %s\n", sub);
// 	free(sub);
// }
