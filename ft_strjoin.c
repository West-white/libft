/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:43:40 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/18 06:49:49 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined_s;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_s = malloc(s1_len + s2_len + 1);
	if (!joined_s)
		return (NULL);
	ft_memcpy(joined_s, s1, s1_len);
	joined_s[s1_len] = '\0';
	ft_strlcat(joined_s, s2, s1_len + s2_len + 1);
	return (joined_s);
}
