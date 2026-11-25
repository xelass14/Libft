/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 11:57:06 by albranco          #+#    #+#             */
/*   Updated: 2026/11/23 17:41:37 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*s;
	char const	*e;
	size_t		slen;

	if (!s1 || !set)
		return (NULL);
	slen = ft_strlen(s1);
	if (slen == 0)
		return (ft_strdup(""));
	s = s1;
	e = s1 + slen - 1;
	while (s < s1 + slen && ft_strchr(set, *s))
		s++;
	while (e >= s1 && ft_strchr(set, *e))
		e--;
	if (s > e)
		return (ft_strdup(""));
	return (ft_substr(s, 0, e - s + 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "  Hello World  ";
// 	char *set = " ";
// 	char *trimmed = ft_strtrim(s, set);
// 	printf("ft_strtrim: '%s'\n", trimmed);
// 	free(trimmed);
// }