/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/21 09:59:06 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{	
	t_list	*node;

	char *str[3] = {"Hello", "World", "Nigga"};
	node = ft_list_push_strs(3, str);
	printf("Top %s \n", (char *)node->data);
	return (0);
}
