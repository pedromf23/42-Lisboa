/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:56:41 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/20 11:10:22 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*new_line;
	int			len;

	new_line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (*buffer || read(fd, buffer, BUFFER_SIZE) > 0)
	{
		new_line = ft_strjoin(new_line, buffer);
		if (!new_line)
			return (NULL);
		ft_buff_move(buffer);
		len = ft_line_len(new_line);
		if (new_line[len - 1] == '\n')
			return (new_line);
	}
	return (new_line);
}

int	main(void)
{
	int		fd = open("file1.txt", O_RDONLY);
	char	*line;
	int		line_number = 1;

	if (fd == -1)
	{
		printf("Error opening file");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Line %d: %s",line_number++, line);
		free(line);
	}
	close(fd);
	return (0);
}