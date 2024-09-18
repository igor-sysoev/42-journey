/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:45:54 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/20 13:55:35 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** 
 * Calculate the factorial of a number using an iterative approach
 * 
 * @param nb The number to calculate the factorial of.
 * @return The factorial of nb if nb is non-negative, otherwise 0.
*/
int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		n *= nb--;
	}
	return (n);
}
