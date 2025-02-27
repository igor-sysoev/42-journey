/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:51:24 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/23 13:23:00 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	permutate(int *arr, int current_position,
int *returnSize, int **permutations)
{
	int	i;
	int	*permutation;

	if (current_position == 4)
	{
		permutation = malloc(4 * sizeof(int));
		i = 0;
		while (i < 4)
		{
			permutation[i] = arr[i];
			i++;
		}
		permutations[*returnSize] = permutation;
		*returnSize += 1;
	}
	i = current_position;
	while (i < 4)
	{
		swap(&arr[current_position], &arr[i]);
		permutate(arr, current_position + 1, returnSize, permutations);
		swap(&arr[current_position], &arr[i]);
		i++;
	}
}

int	**generate_permutations(void)
{
	int	**arr;
	int	*nums;
	int	return_size;
	int	i;

	nums = malloc(4 * sizeof(int));
	arr = malloc(24 * sizeof(int*));
	i = 0;
	while (i < 4)
	{
		nums[i] = i + 1;
		i++;
	}
	return_size = 0;
	permutate(nums, 0, &return_size, arr);
	return (arr);
}
