/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:18:57 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/08 15:28:49 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr)
{
	char	*base;
	char	array[16];
	int		index[2];
	int		temp;

	base = "0123456789abcdef";
	index[0] = 0;
	temp = 0;
	index[1] = 0;
	if (nbr == 0)
		return (putchar_mod());
	while (nbr > 0)
	{
		temp = nbr % 16;
		array[index[0]] = base[temp];
		nbr /= 16;
		index[0]++;
	}
	index[1] = index[0];
	while (index[0]-- > 0)
		ft_putchar(array[index[0]]);
	return (index[1]);
}

int	ft_putnbr_base_maj(unsigned int nbr)
{
	char	*base;
	char	array[16];
	int		temp;
	int		index[2];

	base = "0123456789ABCDEF";
	index[0] = 0;
	temp = 0;
	index[1] = 0;
	if (nbr == 0)
		return (putchar_mod());
	while (nbr > 0)
	{
		temp = nbr % 16;
		array[index[0]] = base[temp];
		nbr /= 16;
		index[0]++;
	}
	index[1] = index[0];
	while (index[0]-- > 0)
		ft_putchar(array[index[0]]);
	return (index[1]);
}

int	ft_putnbr_base_long(unsigned long nbr)
{
	char	*base;
	char	array[16];
	int		index[3];

	base = "0123456789abcdef";
	index[0] = 0;
	index[1] = 0;
	index[2] = 0;
	if (nbr == 0)
	{
		write (1, "0x0", 3);
		return (3);
	}
	while (nbr > 0)
	{
		index[2] = nbr % 16;
		array[index[0]] = base[index[2]];
		nbr /= 16;
		index[0]++;
	}
	index[1] = index[0];
	write (1, "0x", 2);
	while (index[0]-- > 0)	
		ft_putchar(array[index[0]]);
	return (index[1] + 2);
}
