/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:52:09 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/21 10:01:48 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*node;
	t_list	*begin_list;

	if (strs == NULL || size <= 0)
	{
		return (NULL);
	}
	node = ft_create_element(strs[--size]);
	begin_list = node;
	while (size-- > 0)
	{
		node->next = ft_create_element(strs[size]);
		node = node->next;
	}
	return (begin_list);
}
