/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:34:47 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/04 16:36:01 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int parsin_checker(const char *str, va_list args, int sum, int i)
{
	int	nb;

	nb = i;
	if (str[nb + 1] == 'c')
		sum += ft_c(va_arg(args, int ));
	else if (str[nb + 1] == 's')
		sum += ft_s(va_arg(args, char *));
	else if (str[nb + 1] == 'd')
		sum += ft_putnbr(va_arg(args, int));
	else if (str[nb + 1] == 'i')
		sum += ft_putnbr(va_arg(args, int));
	else if (str[nb + 1] == 'u')
		ft_putnbr_unsi(va_arg(args, unsigned int));
	else if (str[nb] == '%' && str[nb + 1] == 'x')
		ft_putnbr_base(va_arg(args, long));
	else if (str[nb] == '%' && str[nb + 1] == 'X')
		ft_putnbr_base_maj(va_arg(args, long));
	else if (str[nb] == '%' && str[nb + 1] == '%')
		write(1, "%", 1);
	return (sum);
}

/*
%c print a single caracter, (use write with a lenght of 1)(return error if more than one is writen) V
%s print a string, (i can use ft_putstr_fd but the fd is useless) V
%p The void * pointer argument is printed in hexadecimal.
%d print a decimal (base 10) number. (probably use a converter to a int base 10) V
%i print an integer in base 10. V
%u print an unsigned decimal (base 10) number. V
%x print a number in hexadecimal (base 16), with lowercase.
%X print a number in hexadecimal (base 16), with uppercase.
%% print a percent sign.
*/
/*
void Printf_main(void)
{

	printf("this should print a caracter : %c\n",'d');
	ft_putchar('d');
	write(1,"\n",1);
	printf("this sould print a string : %s\n","bonjour");
	write (1,"bonjour",8);
	write(1,"\n",1);
	printf("this should print a number : %d\n",-50);
	ft_putnbr(45);
	write(1,"\n",1);
	printf("this should print a number too : %i\n", -42);
	ft_putnbr(-42);
	write(1,"\n",1);
	printf("this should print an unsigned interger : %u\n", -1);
	ft_putnbr_unsi(-1);
}
*/

int	ft_printf(const char *str, ...)
{
	va_list args;
	int		i;
	int		sum;

	va_start(args, str);
	i = 0;
	sum = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_2(str[i]);
			sum++;
			i++;
		}
		else if (str[i] == '%')
		{
			sum += parsin_checker(str, args, sum, i);
			i += 2;
		}
	}
	va_end(args);
	return (sum);
}

int main(void)
{
	ft_printf("hello %s world\n", "-");
	//printf("hello %s world\n", "-");
	return 0;
}

/*
printf("%d %s %c %d", 54, "voiture", '#', -254);
*/