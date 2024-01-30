/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:00:58 by eleon-go@st       #+#    #+#             */
/*   Updated: 2023/05/08 18:05:03 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(long num);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_saver(unsigned int long ptr);
int	ft_unsigned_int(unsigned int long num);
int	ft_hexadecimal(unsigned int num, char c);

#endif