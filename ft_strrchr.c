/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:24:05 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/19 09:07:37 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

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
