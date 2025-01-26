/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:38:57 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/21 09:46:46 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;

	node = ft_list_last(*begin_list);
	if (!node)
	{
		*begin_list = ft_create_element(data);
	}
	else
	{
		node->next = ft_create_element(data);
	}
}
