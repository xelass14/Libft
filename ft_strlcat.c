/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 19:08:07 by albranco          #+#    #+#             */
/*   Updated: 2026/11/25 11:10:08 by albranco         ###   ########.fr       */
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
