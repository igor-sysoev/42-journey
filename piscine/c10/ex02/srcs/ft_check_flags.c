/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:06:05 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/10 09:15:53 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"
#include "ft.h"

void	ft_check_flags(int *i, int *byte_location, char **argv)
{
	if (argv[1][0] == '-')
	{
		*i += 1;
		if (argv[1][1] == 'c')
		{
			if (ft_is_numeric_str(argv[2]))
				*byte_location = ft_atoi(argv[2]);
			else
				ft_print_error("Invalid argument.");
			*i += 1;
		}
	}
}
