/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:30:00 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 15:44:12 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
		ft_memcpy(d, s, len);
	return (d);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dst[20] = "Hello World";
// 	char src[] = "ABCDEFGHIJ";
//
// 	printf("Before: dst = %s\n", (char *)dst);
// 	ft_memmove(dst + 5, dst, 5);
// 	printf("After overlap: %s\n", (char *)dst);
//
// 	char src2[] = "Hello World";
// 	char dst2[20] = "----------";
//  ft_memmove(dst2, src2, 11);
//  printf("Non-overlap: %s\n", dst2);
// 	return (0);
// }