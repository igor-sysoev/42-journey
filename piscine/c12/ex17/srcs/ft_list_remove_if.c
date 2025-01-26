/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:38:11 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/23 09:34:30 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>
#include <stdlib.h>
#include <stdio.h>

extern int	g_allocated;

void	debug_free(void *ptr)
{
	if (ptr)
	{
		g_allocated--;
		printf("Deallocating node, nodes left: %d", g_allocated);
		free(ptr);
	}
}

void	ft_list_remove_if(t_list **begin_list, void *dataref,
int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*next;
	t_list	*cur;

	if (!begin_list || !dataref || !cmp || !free_fct)
		return ;
	prev = NULL;
	cur = *begin_list;
	while (cur)
	{
		if (cmp(cur->data, dataref) == 0)
		{
			next = cur->next;
			free_fct(cur->data);
			debug_free(cur);
			if (prev)
				prev->next = next;
			else
				*begin_list = next;
			cur = next;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
}
