/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:39:22 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/12 15:51:11 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_print_char(int c);
int		ft_print_str(char *s);
int		ft_print_ptr(void *ptr);
int		ft_print_id(int n);
int		ft_print_unsigned(unsigned int i);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printf(const char *format, ...);
char	*ft_itoa(int n);

#endif