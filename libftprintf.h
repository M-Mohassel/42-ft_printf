/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misi-moh <misi-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:28:16 by misi-moh          #+#    #+#             */
/*   Updated: 2022/12/31 15:55:55 by misi-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF.H
# define LIBFTPRINTF.H

# include<stdlib.h>
# include<string.h>
# include<stdio.h>
# include<unistd.h>
# include <stdarg.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_printf(const char *, ...);


#endif