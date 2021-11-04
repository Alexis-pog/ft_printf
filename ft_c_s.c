/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:23:37 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/04 16:28:51 by acoquele         ###   ########.fr       */
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
	write (1, &c, 1);
	return (1);
}

size_t	ft_s(char *c)
{
	size_t	index;

	index = 0;
	while (c[index])
	{
		putchar(c[index]);
		index++;
	}
	return (index + 1);
}

void	ft_putchar_2(char c)
{
	write (1, &c, 1);
}
