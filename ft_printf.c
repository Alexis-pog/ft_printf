/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:34:47 by acoquele          #+#    #+#             */
/*   Updated: 2021/10/27 17:20:04 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void parsin_anal(char *str, int nb)
{
	while(str[i])
	{

	}
}


void	ft_putnbr(int nb)
{
	unsigned int	a;

	a = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		a = -nb;
	}
	else
		a = nb;
	if (a > 9 && nb != -2147483648)
	{
		ft_putnbr(a / 10);
		a %= 10;
	}
	if (nb != -2147483648)
		ft_putchar(a + '0');
}

void	ft_putnbr_unsi(int nb)
{
	unsigned int	a;

	a = (unsigned int)nb;
	if (a > 9)
	{
		ft_putnbr(a / 10);
		a %= 10;
	}
	ft_putchar(a + '0');
}

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

int ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;

	va_start(arg, param);
	i = 0;
	while (str[i])
	{
		
	}
	va_end;
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
printf("%d %s %c %d", 54, "voiture", '#', -254);