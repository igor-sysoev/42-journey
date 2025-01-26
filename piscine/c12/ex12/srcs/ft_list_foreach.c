/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 09:53:37 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/22 09:55:46 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*node;

	if (!begin_list || !f)
		return ;
	node = begin_list;
	while (node)
	{
		f(node->data);
		node = node->next;
	}
}
