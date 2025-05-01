/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:56:32 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/01 12:26:33 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_puthex(unsigned long long n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count = count + ft_puthex(n / 16);
	count = count + ft_print_char(hex[n % 16]);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str("(nil)"));
	count = count + ft_print_str("0x");
	count += ft_puthex((unsigned long long)ptr);
	return (count);
}

// int	main(void)
// {
// 	char *a = "42";
// 	int b = 123;
// 	void *null_ptr = NULL;

// 	void *tests[] = {
// 		null_ptr,
// 		a,
// 		&b,
// 		(void *)0x1,
// 		(void *)0x42,
// 		(void *)0xABCDEF,
// 		(void *)(unsigned long)-1,
// 		(void *)(void *)main,
// 	};

// 	int total = sizeof(tests) / sizeof(void *);
// 	printf("------ FT_PRINT_PTR TESTS ------\n");

// 	for (int i = 0; i < total; i++)
// 	{
// 		printf("Test %d:\n", i + 1);
// 		printf("Your ft_print_ptr:   [");
// 		fflush(stdout); // ensure clean output
// 		int your_len = ft_print_ptr(tests[i]);
// 		printf("] (len = %d)\n", your_len);

// 		printf("Expected printf ptr: [");
// 		int real_len = printf("%p", tests[i]);
// 		printf("] (len = %d)\n", real_len);

// 		printf("-------------------------------\n");
// 	}
// }