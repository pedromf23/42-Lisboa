/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_id.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:01:30 by pfonseca          #+#    #+#             */
/*   Updated: 2025/05/12 18:49:44 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_id(int n)
{
	char	*str;
	int		count;

	str = ft_itoa(n);
	count = ft_print_str(str);
	free(str);
	return (count);
}
