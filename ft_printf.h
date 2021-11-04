/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:35:18 by acoquele          #+#    #+#             */
/*   Updated: 2021/11/04 15:52:01 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c);
int		ft_putnbr(int nb);
void	ft_putnbr_unsi(unsigned int nb);
size_t	ft_s(char *c);
int		ft_strlen(char *str);
int		ft_intlen(int counter);
void	ft_putnbr_base(long nbr);
void	ft_putnbr_base_maj(long nbr);
int		ft_printf(const char *str, ...);
void	ft_putchar_2(char c);
int		ft_c(char c);
#endif
