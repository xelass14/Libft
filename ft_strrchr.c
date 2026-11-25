/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      ::::::::   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 08:23:40 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 12:02:33 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	l;
	char			*lf;

	l = (unsigned char) c;
	i = 0;
	lf = 0;
	while (s[i])
	{
		if ((unsigned char) s[i] == l)
			lf = (char *)&s[i];
		i++;
	}
	if (l == 0)
		return ((char *)(s + i));
	return (lf);
}
