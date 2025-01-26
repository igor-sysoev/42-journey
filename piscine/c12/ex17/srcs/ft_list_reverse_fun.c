/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:29:35 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/24 10:55:24 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

void	ft_swap_data(void **data1, void **data2)
{
	void	*tmp;

	tmp = *data1;
	*data1 = *data2;
	*data2 = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*head;
	t_list	*curr;
	int		i;
	int		j;
	int		size;

	if (!begin_list || !begin_list->next)
		return ;
	size = 0;
	i = 0;
	j = 0;
	curr = begin_list;
	head = begin_list;
	while (head)
	{
		size++;
		head = head->next;
	}
	while (i < size / 2)
	{
		head = begin_list;
		while (j < size - i - 1)
		{
			head = head->next;
			j++;
		}
		ft_swap_data(&curr->data, &head->data);
		curr = curr->next;
		i++;
		j = 0;
	}
}
