/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:20:06 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/21 09:27:48 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	t_list	*node;
	int		i;

	if (!begin_list)
		return (0);
	i = 1;
	node = begin_list;
	while (node->next != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
