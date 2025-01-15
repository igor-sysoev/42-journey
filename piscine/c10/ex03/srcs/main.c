/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:54:20 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/15 12:09:49 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <ft.h>
#include <fcntl.h>
#define CHUNK_SIZE 16

char	*ft_itohex(int num, int padding, char *str)
{
	char	alphabet[] = "0123456789abcdef";
	int		i;

	i = 0;
	while (num > 0)
	{
		str[i++] = alphabet[num % 16];
		num /= 16;
	}
	while (i < padding)
		str[i++] = '0';
	str[i++] = '\0';
	return (ft_str_rev(str));
}

void	ft_print_hex(char *str, char *buf, int size, int is_canonical)
{
	int		i;

	i = 0;
	while (str[i + 1] != '\0' && i < size - 1)
	{
		if (is_canonical)
		{
			ft_itohex(str[i], 2, buf);
			ft_putstr(buf);
			ft_putchar(' ');
			ft_itohex(str[i + 1], 2, buf);
			ft_putstr(buf);
			ft_putchar(' ');
			if (i == 6)
				ft_putchar(' ');
		}
		else
		{
			ft_itohex(str[i + 1], 2, buf);
			ft_putstr(buf);
			ft_itohex(str[i], 2, buf);
			ft_putstr(buf);
			if (i % 2 == 0 && i < size - 2)
				ft_putchar(' ');
		}
		i += 2;
	}
}

void	ft_print_offset(int offset, int is_canonical)
{
	char	*hex;
	char	str[16];

	if (is_canonical)
		hex = ft_itohex(offset, 8, str);
	else
		hex = ft_itohex(offset, 7, str);
	ft_putstr(hex);
}

void	ft_display_file(char *path, int is_canonical)
{
	int		fd;
	int		offset;
	int		size;
	char	buf[CHUNK_SIZE];
	char	hex_buf[3];

	offset = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Couldn't open file");
		return ;
	}
	size = read(fd, buf, CHUNK_SIZE);
	while (size > 0)
	{
		ft_print_offset(offset, is_canonical);
		ft_putchar(' ');
		if (is_canonical)
			ft_putchar(' ');
		ft_print_hex(buf, hex_buf, size, is_canonical);
		if (size % 2 != 0)
		{
			ft_itohex(buf[size - 1], 2, hex_buf);
			ft_putstr(hex_buf);
		}
		offset += size;
		if (is_canonical)
			ft_print_ascii(buf, size);
		ft_putchar('\n');
		size = read(fd, buf, CHUNK_SIZE);
	}
	if (offset != 0)
		ft_print_offset(offset, is_canonical);
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;
	int	is_canonical;

	is_canonical = 0;
	i = 1;
	if (argc == 1)
	{
		ft_putstr("No arguments provided.");
		return (1);
	}
	if (argv[i][0] == '-')
	{
		if (argv[i][1] == 'C')
			is_canonical = 1;
		else
			ft_putstr("Error");
		i++;
	}
	while (i < argc)
	{
		ft_display_file(argv[i], is_canonical);
		i++;
	}
	return (1);
}
