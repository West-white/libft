/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:26:35 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/21 10:41:42 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*p_src;
	unsigned char		*p_dst;
	size_t				i;

	if (dest == src)
		return (dest);
	p_src = src;
	p_dst = dest;
	i = 0;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dest);
}
