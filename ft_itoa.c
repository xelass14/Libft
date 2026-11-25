/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 17:49:40 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 10:17:04 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verifysign(int n)
{
	int	sign;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	return (sign);
}

static int	count_numbers(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = verifysign(n);
	if (sign == -1)
		n = -n;
	len = count_numbers(n);
	str = (char *)malloc(len + 1 + (sign == -1));
	if (!str)
		return (NULL);
	str[len + (sign == -1)] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--len + (sign == -1)] = n % 10 + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int test[] = {0, 42, -42, 2147483647, -2147483648, 123, -123};
// 	int i = 0;

// 	while (i < 7)
// 	{
// 		char *s = ft_itoa(test[i]);
// 		// Imprime o input e o output da função
// 		printf("ft_itoa(%d) = %s\n", test[i], s);
// 		// Liberta memória alocada por ft_itoa
// 		free(s);
// 		i++;
// 	}
// 	return (0);
// }