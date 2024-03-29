/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:08:35 by flee              #+#    #+#             */
/*   Updated: 2021/07/20 18:39:39 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_check(char *memory)
{
	int	i;

	i = 0;
	while (memory[i] != '\0')
	{
		if (memory[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_fill_memory(char *memory, char buf[BUFFER_SIZE + 1], int fd)
{
	int	read_return;
	int	check;

	read_return = 1;
	check = 1;
	while (read_return > 0 && check == 1)
	{
		read_return = read(fd, buf, BUFFER_SIZE);
		buf[read_return] = '\0';
		if (read_return == -1 || (read_return == 0 && memory == NULL))
		{
			memory = NULL;
			return (memory);
		}
		if (read_return != 0)
			memory = ft_strjoin(memory, buf, read_return);
		check = ft_check(memory);
	}
	return (memory);
}

char	*get_next_line(int fd)
{
	static char	*memory;
	char		buf[BUFFER_SIZE + 1];
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	memory = ft_fill_memory(memory, buf, fd);
	if (!memory)
		return (NULL);
	if (memory[0] == '\0')
	{
		free(memory);
		return (NULL);
	}
	line = ft_substr(memory, 0, (ft_strlen(memory, 1) + 1), 0);
	memory = ft_substr(memory, (ft_strlen(memory, 1) + 1),
			(ft_strlen(memory, 0) - 1), 1);
	return (line);
}
