/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:18:11 by zhlim             #+#    #+#             */
/*   Updated: 2023/01/05 17:11:14 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	check_char(char c, va_list *ap, int *i)
{
	if (c == 'c')
		put_char(ap, i);
	if (c == 's')
		put_str(ap, i);
	if (c == 'p')
		put_add(ap, i);
	if (c == 'd' || c == 'i')
		put_nub(ap, i);
	if (c == 'u')
		put_unub(ap, i);
	if (c == 'x')
		put_hexa(ap, i);
	if (c == 'X')
		put_hexa_upper(ap, i);
	if (c == '%')
		ft_putchar('%', i);
}

int	ft_print(const char *str, va_list *ap)
{
	int	i;

	i = 0;
	if (str)
	{
		while (*str)
		{
			if (*str == '%')
			{
				str++;
				check_char(*str, ap, &i);
				str++;
			}
			else
			{
				write(1, &(*str), 1);
				str++;
				i++;
			}
		}
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, str);
	count = ft_print(str, &ap);
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	int i;
// 	char c;
// 	char str[] = "World";

// 	c = 'a';
// 	i = 2147369648;
// 	printf("%d ", printf(" %x \n", 9223372036854775807L*2UL+1UL));
// 	printf("%d ", ft_printf(" %x \n", 9223372036854775807L*2UL+1UL));
// }