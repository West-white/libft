/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoubtas <ymoubtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:35:17 by ymoubtas          #+#    #+#             */
/*   Updated: 2026/10/17 20:12:52 by ymoubtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*curr;

	if (!lst)
		return (0);
	curr = lst;
	i = 0;
	while (curr)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}
