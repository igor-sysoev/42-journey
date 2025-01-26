/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:33:14 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/21 09:35:57 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*node;

	if (!begin_list)
		return (NULL);
	node = begin_list;
	while (node->next != NULL)
	{
		node = node->next;
	}
	return (node);
}
