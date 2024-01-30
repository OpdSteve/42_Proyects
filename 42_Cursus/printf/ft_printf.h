/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:19:50 by eleon-go          #+#    #+#             */
/*   Updated: 2023/04/19 14:10:44 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(char const *content, ...);
int		ft_printfconfig(va_list args, char str);
int		ft_putchar(char c);
int		ft_puthexa(size_t num, char *hexa);
int		ft_hexa_count(size_t num);
int		ft_putnbr(int n);
int		ft_dec_count(long num);
int		ft_putmem(unsigned long long num, char *hexa);
int		ft_putstr(char *c);
#endif