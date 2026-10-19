/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:31:10 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/17 17:32:19 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(const char	*s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	from_start;
	size_t	from_end;

	if (!s1 || !set)
		return (NULL);
	from_start = 0;
	from_end = ft_strlen(s1);
	if (from_end != 0)
		from_end -= 1;
	while (from_start <= from_end && ft_search(set, s1[from_start]) != 0)
		from_start++;
	while (from_end > from_start)
	{
		if (ft_search(set, s1[from_end]) == 0)
			break ;
		from_end--;
	}
	return (ft_substr(s1, from_start, from_end - from_start + 1));
}
