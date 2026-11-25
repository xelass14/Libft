/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albranco <albranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 10:25:01 by albranco          #+#    #+#             */
/*   Updated: 2026/11/24 11:09:34 by albranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	savior(char **arr, size_t count)
{
	while (count--)
		free(arr[count]);
	free(arr);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	**fill_split(char **res, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	word_idx;
	size_t	start;
	size_t	len;

	i = 0;
	word_idx = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		len = i - start;
		res[word_idx] = ft_substr(s, start, len);
		if (!res[word_idx])
			return (savior(res, word_idx), NULL);
		word_idx++;
	}
	res[words] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	return (fill_split(res, s, c, words));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "  hello   world  test  ";
// 	char c = ' ';
// 	char **result = ft_split(s, c);
//
//  if (!result)
//  {
//      printf("NULL returned\n");
//      return (1);
//  }
//
//  size_t i = 0;
//  while (result[i])
//  {
//      printf("word[%zu]: \"%s\"\n", i, result[i]);
//      i++;
//  }
//
//  // Free the result
//  size_t j = 0;
//  while (result[j])
//  {
//      free(result[j]);
//      j++;
//  }
//  free(result);
//
//  return (0);
// }