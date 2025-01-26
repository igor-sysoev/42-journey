/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:25:09 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/23 09:25:12 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>
#include <stdlib.h>
#include <printf.h>

int	g_allocated = 0;

void	*debug_malloc(size_t size)
{
	g_allocated++;
	printf("Allocating node, total allocated: %d \n", g_allocated);
	return (malloc(size));
}

t_list	*ft_create_element(void *data)
{
	t_list	*node;

	node = (t_list *)debug_malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}
