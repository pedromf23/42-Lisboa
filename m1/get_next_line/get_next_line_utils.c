/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:57:18 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/19 15:59:00 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_line_len(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	joined = (char *)malloc(ft_line_len(s1) + ft_line_len(s2) + 1);
	if (!joined)
		return (free(s1), NULL);
	while (s1 && s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] && s2[j] != '\n')
	{
		joined[i + j] = s2[j];
		j++;
	}
	if (s2[j] == '\n')
		joined[i + j++] = '\n';
	joined[i + j] = '\0';
	free(s1);
	return (joined);
}

void	ft_buff_move(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	while (buffer[j])
		buffer[j++] = buffer[i++];
	buffer[j] = '\0';
}
