/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:09:19 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/22 10:15:27 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)(void *, void *))
{
	t_list	*node;

	if (!begin_list || !f || !cmp)
		return ;
	node = begin_list;
	while (node)
	{
		if (cmp(node->data, data_ref) == 0)
			f(node->data);
		node = node->next;
	}
}
