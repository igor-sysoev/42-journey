/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/21 09:24:47 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{	
	t_list	*node;
	char	*test = "Test";

	node = ft_create_element(test);
	
	printf("%s, \n", (char *)node->data);
	ft_list_push_front(&node, "Third now!");
	ft_list_push_front(&node, "Second now!");
	ft_list_push_front(&node, "First now!");
	printf("%s, \n", (char *)node->data);
	printf("%i, \n", ft_list_size(node));
	return (0);
}
