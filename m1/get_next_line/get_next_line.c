/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:56:41 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/05 17:50:49 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*leftover;
	char		*buffer;
	char		*line;
	ssize_t		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	if (!leftover)
		leftover = ft_strdup("");
	bytes_read = 1;
	while (!ft_strchr(leftover, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(buffer), NULL);
		buffer[bytes_read] = '\0';
		leftover = ft_strjoin(leftover, buffer);
	}
	free(buffer);
	line = ft_extract_line(leftover);
	leftover = ft_save_remain(leftover);
	return (line);
}

char	*ft_extract_line(char *s)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	if (!s || !s[0])
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	while (j < i)
	{
		line[j] = s[j];
		j++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_save_remain(char *s)
{
	int		i;
	int		j;
	char	*remain;

	i = 0;
	j = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
		return (free(s), NULL);
	remain = malloc(ft_strlen(s) - i + 1);
	if (!remain)
		return (NULL);
	i++;
	while (s[i])
		remain[j++] = s[i++];
	remain[j] = '\0';
	free(s);
	return (remain);
}
