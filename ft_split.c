/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:41:30 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/20 20:13:37 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, char c, size_t start)
{
	size_t	count;

	count = 0;
	while (s[start])
	{
		while (s[start] && s[start] != c)
			start++;
		count++;
		while (s[start] && s[start] == c)
			start++;
	}
	return (count);
}

static void	free_all(char **splitted, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
}

static int	ft_getsplitted(char **splitted, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	i_splitted;

	i = 0;
	start = 0;
	i_splitted = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		splitted[i_splitted] = ft_substr(s, start, i - start);
		if (!splitted[i_splitted])
		{
			free_all(splitted, i_splitted);
			return (0);
		}
		i_splitted++;
		while (s[i] && s[i] == c)
			i++;
		start = i;
	}
	splitted[i_splitted] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	**splitted;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	count = ft_countwords(s, c, i);
	splitted = malloc((count + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	if (!ft_getsplitted(splitted, s + i, c))
		return (NULL);
	return (splitted);
}
