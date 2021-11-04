/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_length.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:28:01 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/01 16:20:26 by acoquele         ###   ########.fr       */
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

int	ft_intlen(int counter)
{
	int	count;

	if (counter < 0)
		counter *= -1;
	count = 0;
	while (counter > 0)
	{
		count++;
		counter /= 10;
	}
	return (count);
}
