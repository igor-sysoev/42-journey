/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:12:25 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/24 10:07:41 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>
#include <stdlib.h>

void	ft_swap(t_list *curr, t_list *next, t_list *prev, t_list **begin_list, int *sorted)
{
	t_list	*tmp;

	tmp = next->next;
	next->next = curr;
	curr->next = tmp;
	if (prev)
		prev->next = next;
	else
		*begin_list = next;
	*sorted = 0;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*curr;
	t_list	*prev;
	int		sorted;

	sorted = 0;
	if (!begin_list)
		return ;
	curr = *begin_list;
	if (!curr || !curr->next)
		return ;
	while (!sorted)
	{
		sorted = 1;
		curr = *begin_list;
		prev = NULL;
		while (curr->next)
		{
			if (cmp(curr->data, curr->next->data) > 0)
				ft_swap(curr, curr->next, prev, begin_list, &sorted);
			prev = curr;
			curr = curr->next;
		}
	}
}
