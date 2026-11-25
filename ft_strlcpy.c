/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:55:05 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 11:53:15 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	size_t			srclen;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	srclen = 0;
	while (s[srclen])
		srclen++;
	if (size == 0)
		return (srclen);
	while (i < size - 1 && s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (srclen);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dst[10];
// 	char *src = "Hello World";
// 	size_t size = 10;
// 	size_t len = ft_strlcpy(dst, src, size);
// 	printf("src: \"%s\"\n", src);
// 	printf("dst: \"%s\"\n", dst);
//  printf("returned length: %zu\n", len);
//  printf("dst content: %s\n", dst);
//  return (0);
// }