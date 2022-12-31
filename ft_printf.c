/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misi-moh <misi-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:36:24 by misi-moh          #+#    #+#             */
/*   Updated: 2022/12/31 16:24:33 by misi-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	va_start(args, format);
	const char	*p;

	int	count = 0;
	p = format;
	
	while (*p)
	{
		if (*p == '%')
		{
			p++;
			if (*p == 'd')
				
		}
	}
}