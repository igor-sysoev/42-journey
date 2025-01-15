/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:15:34 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/15 09:56:26 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_is_numeric_str(char	*str);
void	ft_check_flags(int *i, int *byte_location, char **argv);
void	ft_print_error(char *str);
int		ft_atoi(char *str);
char	*ft_str_rev(char *str);
void	ft_print_ascii(char *str, int prev_size);
