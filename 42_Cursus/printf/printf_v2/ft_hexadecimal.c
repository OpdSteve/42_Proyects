/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:41:24 by eleon-go          #+#    #+#             */
/*   Updated: 2023/05/02 18:41:30 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*That will be used to make the hexadecimal in a printable caracter using a 
recursive funtion calling him self*/
static int	ft_hexaconverter(unsigned int long num, char *str)
{
	int	x;

	x = 0;
	if (num >= 16)
	{
		x += ft_hexaconverter(num / 16, str);
		x += ft_hexaconverter(num % 16, str);
	}
	else
		x += ft_putchar(str[num % 16]);
	return (x);
}

/*Conver a no-signal number in a hexadecimal character depends of the 
"c" valor*/
int	ft_hexadecimal(unsigned int num, char c)
{
	int	x;

	x = 0;
	if (c == 'x')
		x += ft_hexaconverter(num, "0123456789abcdef");
	else
		x += ft_hexaconverter(num, "0123456789ABCDEF");
	return (x);
}

/*Save the digit in a pointer slot*/
int	ft_saver(unsigned int long ptr)
{
	int	x;

	x = ft_hexaconverter(ptr, "0123456789abcdef");
	return (x);
}
