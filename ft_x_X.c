/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:18:57 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/04 12:21:26 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(long nbr)
{
	char	*base;
	char	array[16];
	int		temp;
	int		index;

	base = "0123456789abcdef";
	index = 0;
	temp = 0;
	while (nbr > 0)
	{
		temp = nbr % 16;
		array[index] = base[temp];
		nbr /= 16;
		index++;
	}
	while (index-- > 0)
		ft_putchar(array[index]);
}

void	ft_putnbr_base_maj(long nbr)
{
	char	*base;
	char	array[16];
	int		temp;
	int		index;

	base = "0123456789ABCDEF";
	index = 0;
	temp = 0;
	while (nbr > 0)
	{
		temp = nbr % 16;
		array[index] = base[temp];
		nbr /= 16;
		index++;
	}
	while (index-- > 0)
		ft_putchar(array[index]);
}
/*
int main() {
  putnbr_base(2147483647);
  return 0;
}
*/