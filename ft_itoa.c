/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:19:14 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/24 10:13:58 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getnum_len(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*s;

	if (n == 0)
		return (ft_strdup("0"));
	i = ft_getnum_len(n);
	s = malloc((i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	nbr = n;
	if (n < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		s[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	return (s);
}
