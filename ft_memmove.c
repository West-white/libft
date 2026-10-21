/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:53:32 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/21 10:51:31 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (dest);
	}
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
	return (dest);
}
