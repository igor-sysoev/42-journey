/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/21 10:36:18 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{	
	t_list	*node;

	char *str[8] = {"Hello", "World", "Nigga", "Some New El", "Foo", "Buz", "FizzBuzz", "Bar"};
	node = ft_list_push_strs(8, str);
	printf("Top %s \n", (char *)node->data);
	
	node = ft_list_at(node, 2);
	printf("node at position: %s\n", (char *)node->data);
	return (0);
}
