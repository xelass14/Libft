/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 19:08:07 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 15:31:56 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			dstlen;
	size_t			srclen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	dstlen = 0;
	while (dstlen < size && dst[dstlen])
	{
		dstlen++;
	}
	if (size <= dstlen)
		return (size + srclen);
	i = dstlen;
	j = 0;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dst[20] = "Hello ";
// 	char *src = "World";
// 	size_t size = 20;
// 	size_t len = ft_strlcat(dst, src, sizeof(dst));
//  printf("src: \"%s\"\n", src);
//  printf("dst before: \"%s\"\n", "Hello ");
//  printf("dst after: \"%s\"\n", dst);
//  printf("returned length: %zu\n", len);
//  printf("dst content: %s\n", dst);
//  return (0);
// }