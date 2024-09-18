/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:27:15 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/20 14:42:03 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *  Calculate the power of a number using an iterative approach. If
 *  both the base and the exponent are zero, returns 1 by definition.
 *  Negative exponents are not handled and return zero.
 * 
 * @param nb The base number.
 * @param power The exponent to raise the base to.
 * @return The number raised to the specified power if the power is non-negative;
 *         otherwise return 0.
 */
int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power-- > 0)
		res *= nb;
	return (res);
}
