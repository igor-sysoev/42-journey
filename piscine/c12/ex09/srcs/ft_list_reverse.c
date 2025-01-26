/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:01:46 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/22 09:27:07 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*cur;
	t_list	*next;

	prev = NULL;
	cur = *begin_list;
	
	while (cur)
	{
		next = cur->next;
		cur->next = prev;

		prev = cur;
		cur = next;
	}
	*begin_list = prev;
}
