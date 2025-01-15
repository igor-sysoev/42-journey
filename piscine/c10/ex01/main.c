/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 09:26:59 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/07 11:42:22 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libgen.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"
#include <errno.h>
#include <string.h>

#define BUF_SIZE 25000

void	ft_print_error(char *str)
{
	write(2, "ft_cat: ", 8);
	write(2, str, ft_strlen(str) * sizeof(char));
	write(2, "\n", 1);
}

void	ft_print_file_error(char *filename)
{
	write(2, "ft_cat: ", 8);
	write(2, basename(filename), ft_strlen(basename(filename)));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}

int	ft_print_contents(int fd)
{
	char	buf[BUF_SIZE];
	int		size;

	size = read(fd, buf, BUF_SIZE);
	while (size > 0)
	{
		write(1, buf, size);
		size = read(fd, buf, BUF_SIZE);
	}
	if (size == -1)
	{
		ft_print_error(strerror(errno));
		return (1);
	}
	return (0);
}

int	ft_handle_args(int argc)
{
	if (argc == 1)
		ft_print_contents(0);
	return (argc == 1);
}

int	main(int argc, char **argv)
{
	int	fd;
	int	i;

	i = 1;
	if (ft_handle_args(argc) == 1)
		return (0);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_print_file_error(argv[i]);
		}
		else
		{
			ft_print_contents(fd);
			if (close(fd) == -1)
				ft_print_error(strerror(errno));
		}
		i++;
	}
	return (0);
}
