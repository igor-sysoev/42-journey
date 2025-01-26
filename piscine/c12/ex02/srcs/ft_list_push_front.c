/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 08:47:22 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/21 09:10:15 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;
	
	node = ft_create_element(data);
	node->next = *begin_list;
	*begin_list = node;
}
