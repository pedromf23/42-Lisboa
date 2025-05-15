/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:06:40 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/13 10:39:56 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int num, const char format)
{
	char	*hex;
	int		count;

	count = 0;
	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (num >= 16)
		count = count + ft_print_hex(num / 16, format);
	count = count + ft_print_char(hex[num % 16]);
	return (count);
}
