/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:18:21 by eleon-go          #+#    #+#             */
/*   Updated: 2023/05/02 12:13:02 by eleon-go         ###   ########.fr       */
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
int	ft_putnbr(int num);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_saver(unsigned int long ptr);
int	ft_unsigned_int(unsigned int long num);
int	ft_hexadecimal(unsigned int num, char c);

#endif