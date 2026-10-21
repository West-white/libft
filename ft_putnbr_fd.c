/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:16:54 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/20 07:40:03 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr <= 9)
	{
		ft_putchar_fd(nbr + '0', fd);
		return ;
	}
	ft_putnbr_fd(nbr / 10, fd);
	ft_putnbr_fd(nbr % 10, fd);
}
