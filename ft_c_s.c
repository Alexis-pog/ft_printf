/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:23:37 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/08 14:44:26 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *c)
{
	int	count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_c(char c)
{
	if (ft_isascii(c) == 1)
	{
		write (1, &c, 1);
		return (1);
	}
	return (0);
}

size_t	ft_s(char *c)
{
	size_t	index;

	if (!c)
	{
		write (1, "(null)", 6);
		return (6);
	}
	index = 0;
	while (c[index])
	{
		ft_putchar(c[index]);
		index++;
	}
	return (index);
}
