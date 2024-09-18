/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:58:04 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/20 14:04:19 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** Calculate the factorial of a number using recursive approach
 *
 *  @param nb The number to calculate the factorial of
 *  @return The factorial of a number if nb is non-negative, otherwise 0
*/
int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
