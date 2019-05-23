/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguboju <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:32:22 by auguboju          #+#    #+#             */
/*   Updated: 2019/05/22 13:26:45 by auguboju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					getline(char **stack, char **line)
{
	char	*heap;

	if ((*stack)[0] == '\0')
		return (0);
	if (ft_strchr(*stack, '\n') != NULL)
	{
		*(ft_strchr(*stack, '\n')) = '\0';
		*line = ft_strdup(*stack);
		heap = ft_strdup(ft_strchr(*stack, '\0') + 1);
		free(*stack);
		if (heap)
		{
			*stack = ft_strdup(heap);
			free(heap);
		}
	}
	else
	{
		*line = ft_strdup(*stack);
		ft_memdel((void **)stack);
	}
	return (1);
}

int					get_next_line(int const fd, char **line)
{
	int					ret;
	char				buffer[BUFF_SIZE + 1];
	static char			*stack[MAX_FD];
	char				*heap;

	if (fd == -1 || read(fd, buffer, 0) < 0 || !line)
		return (-1);
	if (!(stack[fd]))
		stack[fd] = ft_strnew(0);
	while (ft_strchr(stack[fd], '\n') == NULL)
	{
		ret = read(fd, buffer, BUFF_SIZE);
		buffer[ret] = '\0';
		if (ret == 0)
			break ;
		heap = ft_strjoin(stack[fd], buffer);
		free(stack[fd]);
		stack[fd] = ft_strdup(heap);
		if (!(stack[fd]))
			stack[fd] = ft_strnew(0);
		free(heap);
	}
	return (getline(&stack[fd], line));
}
