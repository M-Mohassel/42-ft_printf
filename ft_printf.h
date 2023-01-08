/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misi-moh <misi-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:19:13 by misi-moh          #+#    #+#             */
/*   Updated: 2023/01/08 11:53:54 by misi-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdlib.h>
# include<string.h>
# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>
# include<limits.h>

int		ft_putpointer(unsigned long x);
int		ft_puthe_bigx(unsigned long x);
int		ft_puthex(unsigned long x);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		formats(va_list args, const char *str);
int		ft_printf(const char *fmt, ...);

#endif