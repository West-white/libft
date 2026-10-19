/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 07:49:45 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/18 10:11:30 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	i = 0;
	ch = c;
	while (1)
	{
		if ((unsigned char)s[i] == ch)
			return ((char *)s + i);
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
}
