/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:26:35 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/15 17:26:54 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*p_src;
	size_t				i;

	p_src = src;
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = p_src[i];
		i++;
	}
	return (dest);
}
