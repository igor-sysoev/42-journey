/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:36:52 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/23 10:06:45 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*node;

	if (!begin_list)
		return ;
	node = *begin_list;
	if (!node)
	{
		*begin_list = begin_list2;
		return ;
	}
	while (node->next)
	{
		node = node->next;
	}
	node->next = begin_list2;
}
