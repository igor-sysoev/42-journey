/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_numeric_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:55:40 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/09 10:24:44 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

int	ft_is_numeric_str(char *str)
{
        int     is_numeric;

        is_numeric = 1;
        while (*str != '\0')
        {
                if (*str < '0' || *str > '9')
                        is_numeric = 0;
                str++;
        }
        return (is_numeric);
}
