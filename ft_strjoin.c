/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 11:20:46 by albranco          #+#    #+#             */
/*   Updated: 2026/11/23 11:44:53 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	newlen;
	char	*newstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newlen = s1len + s2len + 1;
	newstr = (char *)malloc(newlen);
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1, s1len + 1);
	ft_strlcat(newstr, s2, newlen);
	return (newstr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s1 = "Hello ";
// 	char *s2 = "World";
// 	char *joined = ft_strjoin(s1, s2);
// 	printf("ft_strjoin: %s\n", joined);
// 	free(joined);
// }