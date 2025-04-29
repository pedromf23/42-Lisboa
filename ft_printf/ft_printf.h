/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:39:22 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/29 18:19:20 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>

int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_id(int n);
int		ft_print_unsigned(unsigned int i);
char	*ft_itoa(int n);
int		ft_putstr(char *s);
int		ft_print_hex(unsigned int num, const char format);

#endif