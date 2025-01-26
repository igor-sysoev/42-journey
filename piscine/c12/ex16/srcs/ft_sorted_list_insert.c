/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:20:01 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/26 11:28:34 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str++)
		write(1, str, 1);
}

int	ft_insert_data(t_list *prev, t_list *curr, void *data,
t_list **begin_list)
{
	t_list	*tmp;
	t_list	*new_node;

	new_node = ft_create_element(data);
	if (!new_node)
		return (0);
	tmp = prev;
	if (tmp)
	{
		tmp = prev->next;
		prev->next = new_node;
	}
	else
		*begin_list = new_node;
	new_node->next = curr;
	return (1);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data,
int (*cmp)(void *, void *))
{
	t_list	*prev;
	t_list	*curr;
	int		has_appended;

	has_appended = 0;
	if (!begin_list || !cmp || !data)
		return ;
	prev = NULL;
	curr = *begin_list;
	while (curr)
	{
		if (cmp(data, curr->data) <= 0)
		{
			if (!ft_insert_data(prev, curr, data, begin_list))
				ft_putstr("Coudn't create node list\n");
			else
				has_appended = 1;
			return ;
		}
		prev = curr;
		curr = curr->next;
	}
	if (!has_appended)
		ft_insert_data(prev, curr, data, begin_list);
}
