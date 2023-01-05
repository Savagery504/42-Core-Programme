/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:24:43 by zhlim             #+#    #+#             */
/*   Updated: 2023/01/05 14:24:44 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_print(const char *str, va_list *ap);
void	check_char(char c, va_list *ap, int *i);
void	put_hexa_upper(va_list *ap, int *i);
void	ft_putnub_hexa_upper(size_t nb, int *i);
void	put_hexa(va_list *ap, int *i);
void	put_unub(va_list *ap, int *i);
void	ft_putunub(unsigned int nb, int *i);
void	put_nub(va_list *ap, int *i);
void	ft_putnub(int nb, int *i);
void	put_add(va_list *ap, int *i);
void	ft_putnub_hexa(size_t nb, int *i);
void	put_str(va_list *ap, int *i);
void	put_char(va_list *ap, int *i);
void	ft_putchar(char c, int *i);

#endif