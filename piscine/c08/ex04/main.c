/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:57:05 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/02 12:06:15 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strs_to_tab.h"

int main(void)
{
    char *strs[] = {"hello", "world", "this", "is", "a", "test"};
    int size = sizeof(strs) / sizeof(char *);
    struct s_stock_str *result = ft_strs_to_tab(size, strs);

    if (result == NULL)
    {
        printf("Error: ft_strs_to_tab returned NULL\n");
        return 1;
    }
    //ft_show_tab(result);

    // Free the allocated memory
    for (int i = 0; i < size; i++)
    {
        free(result[i].copy);
    }
    free(result);

    return 0;
}
