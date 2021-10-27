/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:05:02 by acoquele          #+#    #+#             */
/*   Updated: 2021/10/26 14:47:57 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_unsi(int nb)
{
	unsigned int	a;

	a = (unsigned int)nb;
	if (a > 9)
	{
		ft_putnbr(a / 10);
		a %= 10;
	}
	ft_putchar(a + '0');
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	a = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		a = -nb;
	}
	else
		a = nb;
	if (a > 9 && nb != -2147483648)
	{
		ft_putnbr(a / 10);
		a %= 10;
	}
	if (nb != -2147483648)
		ft_putchar(a + '0');
}
