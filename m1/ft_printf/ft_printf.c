/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:31:05 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/14 19:40:05 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (format == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	if (format == 'i' || format == 'd')
		return (ft_print_id(va_arg(args, int)));
	if (format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	if (format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 'x'));
	if (format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 'X'));
	if (format == '%')
		return (ft_print_char('%'));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			count = count + ft_check_format(format[++i], args);
		else
			count = count + ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	char	*str = NULL;

// 	ft_printf("Char: %c\n", 'A');
// 	printf("Original Char: %c\n", 'A');
// 	ft_printf("String: %s\n", str);
// 	printf("Original String: %s\n", str);
// 	ft_printf("Pointer: %p\n", str);
// 	printf("Original Pointer: %p\n", str);
// 	ft_printf("Decimal: %d\n", -123);
// 	printf("Original Decimal: %d\n", -123);
// 	ft_printf("Integer: %i\n", -456);
// 	printf("Original Integer: %i\n", -456);
// 	ft_printf("Unsigned: %u\n", -3);
// 	printf("Original Unsigned: %u\n", -3);
// 	ft_printf("Hex (lower): %x\n", 255);
// 	printf("Original Hex (lower): %x\n", 255);
// 	ft_printf("Hex (upper): %X\n", 255);
// 	printf("Original Hex (upper): %X\n", 255);
// 	ft_printf("Percent sign: %%\n");
// 	printf("Original Percent sign: %%\n");
// 	printf("%d\n",printf(NULL));
// 	printf("%d\n",ft_printf(NULL));
// 	return (0);
// }
