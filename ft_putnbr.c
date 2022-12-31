/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misi-moh <misi-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:50:45 by misi-moh          #+#    #+#             */
/*   Updated: 2022/12/31 15:50:59 by misi-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int n)
{
	int	sign;
	int	c;

	sign = 1;
	if (n < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if (n / 10)
		ft_putnbr(n / 10 * sign);
	c = '0' + n % 10 * sign;
	ft_putchar(c);
}
