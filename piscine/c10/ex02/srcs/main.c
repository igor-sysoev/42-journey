/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 08:46:54 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/10 09:14:23 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define CHUNK_SIZE 4096

int	ft_print_contents(int fd, int n_bytes, char *filepath)
{
	char		*buf;
	int			file_size;
	int			read_size;

	file_size = 0;
	read_size = 0;
	buf = malloc(sizeof(char) * CHUNK_SIZE);
	if (buf == NULL)
		return (1);
	read_size = read(fd, buf, CHUNK_SIZE);
	while (read_size > 0)
	{
		file_size += read_size;
		read_size = read(fd, buf, CHUNK_SIZE);
	}
	free(buf);
	buf = malloc(sizeof(char) * file_size);
	if (buf == NULL || close(fd) == -1)
		return (1);
	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		return (1);
	read(fd, buf, file_size);
	if (n_bytes > file_size)
		write(1, buf, file_size);
	else
		write(1, buf + file_size - n_bytes, n_bytes);
	return (0);
}

int	main(int argc, char **argv)
{
	int	n_bytes;
	int	i;
	int	fd;

	i = 1;
	n_bytes = 10;
	if (argc > 1)
		ft_check_flags(&i, &n_bytes, argv);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		ft_print_contents(fd, n_bytes, argv[i]);
		close(fd);
		i++;
	}
	return (1);
}
