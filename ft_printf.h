/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:55:50 by pirulenc          #+#    #+#             */
/*   Updated: 2023/12/08 06:08:03 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_check(const char c, va_list content);
int	ft_putchar_int(char c);
int	ft_putstr_int(const char *str);
int	ft_putnbr_int(int nbr);
int	ft_putnbr_unsint(unsigned int nbr);
int	ft_putnbr_base_int(unsigned int nbr, const char *tab);
int	ft_putnbr_llu_int(long long unsigned int nbr, const char *tab);
int	ft_putp_int(unsigned long long *str);

#endif
