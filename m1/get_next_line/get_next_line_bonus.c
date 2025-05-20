/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:16:47 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/20 10:31:30 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[MAX_FD][BUFFER_SIZE + 1];
	char		*new_line;
	int			len;

	new_line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > MAX_FD)
		return (NULL);
	while (*buffer[fd] || read(fd, buffer[fd], BUFFER_SIZE) > 0)
	{
		new_line = ft_strjoin(new_line, buffer[fd]);
		if (!new_line)
			return (NULL);
		ft_buff_move(buffer[fd]);
		len = ft_line_len(new_line);
		if (new_line[len - 1] == '\n')
			return (new_line);
	}
	return (new_line);
}

int	main(void)
{
	int		fd1 = open("file1.txt", O_RDONLY);
	int		fd2 = open("file2.txt", O_RDONLY);
	char	*line1;
	char	*line2;

	if (fd1 < 0 || fd2 < 0)
	{
		printf("Error opening file");
		return (1);
	}
	while (1)
	{
		line1 = get_next_line(fd1);
		line2 = get_next_line(fd2);
		if (!line1 && !line2)
		{
			break ;
		}
		if (line1)
		{
			printf("file1: %s", line1);
			free(line1);
		}
		if (line2)
		{
			printf("file2: %s", line2);
			free(line2);
		}
	}
	close(fd1);
	close(fd2);
	return (0);
}