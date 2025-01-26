/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:43:38 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/26 11:49:27 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

void	ft_sorted_list_merge(t_list **begin_list, t_list *begin_list2,
int (*cmp)(void *, void *))
{
	if (*begin_list)
	{
		while (begin_list2)
		{
			ft_sorted_list_insert(begin_list, begin_list2->data, cmp);
			begin_list2 = begin_list2->next;
		}
	}
	else
		*begin_list = begin_list2;
}
