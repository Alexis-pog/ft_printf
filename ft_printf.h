/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:35:18 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/08 15:16:22 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

void	ft_putchar(char c);
int		ft_putnbr(int nb);
int		putchar_mod(void);
int		ft_putnbr_unsi(unsigned int nb);
size_t	ft_s(char *c);
int		ft_strlen(char *str);
int		ft_intlen(int counter);
int		ft_putnbr_base(unsigned int nbr);
int		ft_putnbr_base_maj(unsigned int nbr);
int		ft_putnbr_base_long(unsigned long nbr);
int		ft_printf(const char *str, ...);
int		ft_c(char c);
int		ft_isascii(int c);
int		ft_uintlen(unsigned int counter);
#endif
