/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:34:47 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/17 10:19:15 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parsin_checker(const char *str, va_list args, int sum, int i)
{
	if (str[i + 1] == 'c')
		sum += ft_c(va_arg(args, int));
	else if (str[i + 1] == 's')
		sum += ft_s(va_arg(args, char *));
	else if (str[i + 1] == 'p')
		sum += ft_putnbr_base_long(va_arg(args, unsigned long));
	else if (str[i + 1] == 'd')
		sum += ft_putnbr(va_arg(args, int));
	else if (str[i + 1] == 'i')
		sum += ft_putnbr(va_arg(args, int));
	else if (str[i + 1] == 'u')
		sum += ft_putnbr_unsi(va_arg(args, unsigned int));
	else if (str[i + 1] == 'x')
		sum += ft_putnbr_base(va_arg(args, unsigned int));
	else if (str[i + 1] == 'X')
		sum += ft_putnbr_base_maj(va_arg(args, unsigned int));
	else if (str[i + 1] == '%')
	{
		write(1, "%", 1);
		sum += 1;
	}
	return (sum);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		sum;

	va_start(args, str);
	i = 0;
	sum = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			sum++;
			i++;
		}
		else if (str[i] == '%')
		{
			sum = parsin_checker(str, args, sum, i);
			i += 2;
		}
	}
	va_end(args);
	return (sum);
}

/*
int main(void)
{
	//ft_printf("f%i\n", 100);
	printf("%d\n", ft_printf(" %d ", -1));
	//printf("%i\n", 100);
	printf("%d\n", printf(" %d ", -1));
	return 0;
}
*/
/*
printf("%d %s %c %d", 54, "voiture", '#', -254);
*/