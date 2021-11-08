/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:11:50 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/08 14:32:53 by acoquele         ###   ########.fr       */
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
		return (a[1] + 11);
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
	return (ft_intlen(nb));
}

int	ft_putnbr_unsi(unsigned int nb)
{
	unsigned int	count;

	count = nb;
	if (count > 9)
	{
		ft_putnbr_unsi(count / 10);
		count %= 10;
	}
	ft_putchar(count + '0');
	return (ft_uintlen(nb));
}
