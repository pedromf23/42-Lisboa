/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:57:25 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/19 16:40:01 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 27
# endif

# include <stdlib.h> //malloc, free, size_t
# include <unistd.h> //read
# include <stdio.h> //printf
# include <fcntl.h> //O_RDONLY

char	*get_next_line(int fd);
size_t	ft_line_len(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	ft_buff_move(char *buffer);

#endif