/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:43:42 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/18 09:14:03 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			total_size;

	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	i = 0;
	if (nmemb * size / size != nmemb)
		return (NULL);
	total_size = nmemb * size;
	if (total_size == 0)
		total_size++;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
