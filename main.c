/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguboju <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:43:02 by auguboju          #+#    #+#             */
/*   Updated: 2019/05/23 17:49:10 by auguboju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		ret;
	int		i;

	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("fd:%s, line>%s\n", "1", line);
			}
			close(fd);
			i = 0;
			fd = open(argv[2], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("fd:%s, line>%s\n", "2", line);
			}
			close(fd);
			i = 0;
			fd = open(argv[3], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("fd:%s, line>%s\n", "3", line);
			}
			close(fd);
			i = 0;
			fd = open(argv[4], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("fd:%s, line>%s\n", "4", line);
			}
			close(fd);
			i = 0;
			fd = open(argv[5], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("fd:%s, line>%s\n", "5", line);
			}
			close(fd);
		}
	}
	return (1);
}
