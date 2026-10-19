/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:28:11 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/18 07:44:23 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str_1;
	unsigned const char	*str_2;
	size_t				i;

	str_1 = s1;
	str_2 = s2;
	i = 0;
	while (i < n)
	{
		if (str_1[i] - str_2[i] > 0)
			return (1);
		else if (str_1[i] - str_2[i] < 0)
			return (-1);
		i++;
	}
	return (0);
}
