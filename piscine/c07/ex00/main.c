/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:33:11 by isysoev           #+#    #+#             */
/*   Updated: 2024/11/05 22:01:33 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_strdup.c"

int	main(void)
{
	char	*s;
	char	*p;

	s = "Hello Worldasdawdas dasdlakwdl kasldk alwkd laksdl kasldk alwdk alskdl akwdl aksdl kalwdk alwdk lawkd NULL!";
	p = ft_strdup(s);
	printf("Copied string - %s", p);
	return (1);
}
