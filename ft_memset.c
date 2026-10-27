/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 19:20:48 by albranco          #+#    #+#             */
/*   Updated: 2026/10/27 19:25:52 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
