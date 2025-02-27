/* ************************************************************************** */
			clear_row(current_row);
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:37:10 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/20 11:49:54 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <rush.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	solution[SIZE][SIZE];

	init_array(solution);
	if (argc != 2 || !populate_view(solution, argv[1]))
	{
		ft_putstr("Error\n");
		return (1);
	}
	solve(solution);
	printf("Is valid map: %i", validate(solution, 1));
	printf("Is valid map: %i", validate(solution, 0));
	print_board(solution);
	return (0);
}
