/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:07:54 by isysoev           #+#    #+#             */
/*   Updated: 2025/03/07 16:41:13 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_atoi(char *str);

int	is_numeric(char c);

int	min(int a, int b, int c);

typedef struct s_biggest_square
{
	int	x;
	int	y;
	int	side;
}	t_biggest_square;

void	print_bsq(char *str, t_biggest_square *biggest_square, char fill);
int	get_line_length(char *str);
