/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:11:50 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/04 12:23:34 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	a[2];

	a[1] = 0;
	a[0] = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		a[1] = 11;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		a[0] = -nb;
	}
	else
		a[0] = nb;
	if (a[0] > 9 && nb != -2147483648)
	{
		ft_putnbr(a[0] / 10);
		a[0] %= 10;
	}
	if (nb != -2147483648)
		ft_putchar(a[0] + '0');
	return (a[1]);
}

void	ft_putnbr_unsi(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putnbr_unsi(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
}
