/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:03:50 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/09 10:05:27 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"
#include "ft.h"
#include <unistd.h>

void	ft_print_error(char *str)
{
	write(2, "ft_tail: ", 10);
	write(2, str, ft_strlen(str));
	write(2, "\n", 1);
}
