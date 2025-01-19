/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:11:45 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/17 10:15:42 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

int	ft_check_errors(int value2, char op)
{
	if (value2 == 0 && op == '/')
	{
		ft_putstr("Stop: division by zero\n");
		return (1);
	}
	if (value2 == 0 && op == '%')
	{
		ft_putstr("Stop: modulo by zero\n");
		return (1);
	}
	return (0);
}

int	get_op(char op)
{
	if (op == '+')
		return (0);
	if (op == '-')
		return (1);
	if (op == '/')
		return (2);
	if (op == '*')
		return (3);
	if (op == '%')
		return (4);
	return (-1);
}

int	ft_doop(int value1, int value2, char op)
{
	int	(*ops[5])(int, int);
	int	result;
	int	code;

	ops[0] = sum;
	ops[1] = sub;
	ops[2] = divide;
	ops[3] = multiply;
	ops[4] = modulo;
	code = get_op(op);
	if (code == -1)
		return (0);
	result = ops[code](value1, value2);
	return (result);
}
