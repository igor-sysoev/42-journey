/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:43:39 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/02 12:05:56 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRS_TO_TAB_H
# define FT_STRS_TO_TAB_H

# include <stdlib.h>
# include <stdio.h>

typedef struct	s_stock_str
{
	int	size;
	char		*str;
	char		*copy;
}	t_stock_str;

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif
