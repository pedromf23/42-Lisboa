/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:17:49 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/19 17:15:44 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 38
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
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