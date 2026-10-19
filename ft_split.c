/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 07:32:13 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/17 11:35:09 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	countwords(char const *s, char c)
{
	size_t	start;
	size_t	count;

	start = 0;
	count = 0;
	while (s[start])
	{
		if (s[start + 1] == c || !s[start + 1])
			if (s[start] != c)
				count++;
		start++;
	}
	return (count);
}

static void	ft_free_split(char	**splitted, size_t	end)
{
	size_t	i;

	i = 0;
	while (i < end)
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
	return ;
}

static void	ft_split_now(char **splitted, char *trimmed, char c)
{
	size_t	i;
	size_t	start;
	size_t	pos_split;

	i = 0;
	pos_split = 0;
	while (trimmed[i])
	{
		while (trimmed[i] && trimmed[i] == c)
			i++;
		start = i;
		while (trimmed[i] && trimmed[i] != c)
			i++;
		splitted[pos_split] = ft_substr(trimmed, start, i - start);
		if (!splitted[pos_split])
		{
			free(trimmed);
			return (ft_free_split(splitted, pos_split));
		}
		pos_split++;
	}
	splitted[pos_split] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	count_words;
	char	*trimmed;
	char	**splitted;

	if (!s)
		return (NULL);
	trimmed = ft_strtrim(s, &c);
	if (!trimmed)
		return (NULL);
	count_words = countwords(trimmed, c);
	splitted = malloc((count_words + 1) * sizeof(char *));
	if (!splitted)
	{
		free(trimmed);
		return (NULL);
	}
	ft_split_now(splitted, trimmed, c);
	free(trimmed);
	return (splitted);
}
