/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:19:14 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/17 17:28:27 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse(char *s, int end)
{
	int		i;
	char	tmp;

	i = 0;
	if (s[i] == '-')
		i++;
	while (i < end)
	{
		tmp = s[i];
		s[i] = s[end];
		s[end] = tmp;
		i++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*s;

	if (n == 0)
		return (ft_strdup("0"));
	s = malloc(12 * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	nbr = n;
	if (n < 0)
	{
		s[i++] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		s[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	s[i] = '\0';
	ft_reverse(s, i - 1);
	return (s);
}
