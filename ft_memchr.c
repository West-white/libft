/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:10:13 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/23 10:38:09 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	character;
	size_t			i;

	str = (unsigned char *)s;
	character = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == character)
			return (str + i);
		i++;
	}
	return (NULL);
}
