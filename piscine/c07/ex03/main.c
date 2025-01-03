/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:38:05 by isysoev           #+#    #+#             */
/*   Updated: 2024/11/07 16:04:02 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strjoin.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{	
	char *join;
	char *sep = ", ";
	char *str1 = "First String";
	char *str2 = "Second String";
	char **strs;
	
	int len = strlen(str1) + strlen(str2);
	strs = malloc(sizeof(char) * len);
	strs[0] = str1;
	strs[1] = str2;
	join = ft_strjoin(2, strs, sep);
	printf("result: %s", join);
	return(1);
}
