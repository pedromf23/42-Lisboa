/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:29:37 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 17:19:58 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void to_upper_even(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c)
// 		*c = ft_toupper(*c);
// }

// int	main(void)
// {
// 	char	str[] = "benfica";

// 	printf("Before: %s\n", str);
// 	ft_striteri(str, to_upper_even);
// 	printf("After:  %s\n", str);
// 	return (0);
// }