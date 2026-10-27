/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:28:11 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/25 06:26:57 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str_1;
	unsigned const char	*str_2;
	size_t				i;

	if (s1 == s2)
		return (0);
	str_1 = s1;
	str_2 = s2;
	i = 0;
	while (i < n)
	{
		if (str_1[i] - str_2[i] != 0)
			return (str_1[i] - str_2[i]);
		i++;
	}
	return (0);
}
