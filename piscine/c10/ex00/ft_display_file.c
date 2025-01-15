/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:50:49 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/07 09:06:17 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

int	ft_validate_args(int argc)
{
	if (argc == 1)
		write(2, "File name is missing.\n", 23);
	if (argc > 2)
		write(2, "Too many arguments.\n", 21);
	return (argc == 1 || argc > 2);
}

void	ft_read_file(int fd)
{
	char	buf;

	while (read(fd, &buf, 1) > 0)
		write(1, &buf, 1);
}

int	main(int argc, char **argv)
{
	int	is_invalid;
	int	fd;
	int	size;

	is_invalid = ft_validate_args(argc);
	if (is_invalid)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 19);
		return (1);
	}
	ft_read_file(fd);
	if (close(fd) == -1)
	{
		write(2, "Cannot close file\n", 25);
		return (1);
	}
	return (0);
}
