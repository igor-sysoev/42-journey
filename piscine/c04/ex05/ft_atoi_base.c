/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:28:18 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/17 23:26:15 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int	ft_checkbase(char *base)
{
	while (*base++ != '\0')
		;
	return (1);
}

int	ft_get_base_value(char c, char *base)
{
	int	i;
	
	i = 0;
	while (*base++ != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	n;
	char	*p;
	int	len;

	len = 0;
	p = base;
	n = 0;
	sign = 1;
	while (*base++ != '\0')
		len++;
	base = p;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-' && ++n % 2 != 0)
			sign = -1;
		else
			sign = 1;
		str++;
	}
	n = 0;
	while (*str != '\0')
	{
		n = len * n + ft_get_base_value(*str, base);
		str++;
	}
	return (n * sign);
}
