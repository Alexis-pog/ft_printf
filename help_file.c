/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:28:01 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/08 15:17:08 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen(int counter)
{
	int	count;

	count = 0;
	if (counter < 0)
	{	
		counter *= -1;
		count++;
	}
	while (counter > 0)
	{
		count++;
		counter /= 10;
	}
	if (count == 0)
		count++;
	return (count);
}

int	ft_uintlen(unsigned int counter)
{
	unsigned int	count;

	count = 0;
	while (counter > 0)
	{
		counter /= 10;
		count++;
	}
	if (count == 0)
		count++;
	return (count);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	putchar_mod(void)
{
	write (1, "0", 1);
	return (1);
}
