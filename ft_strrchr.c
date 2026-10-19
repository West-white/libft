/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:24:05 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/18 07:39:16 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	ch = c;
	while (1)
	{
		if ((unsigned char)s[i] == ch)
			return ((char *)s + i);
		if (i == 0)
			return (NULL);
		i--;
	}
}
