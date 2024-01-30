/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:37:32 by eleon-go          #+#    #+#             */
/*   Updated: 2023/04/18 21:22:31 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*La función convierte el número en positivo si es negativo, cuenta la 
cantidad de dígitos y luego imprime cada dígito en orden inverso mediante 
recursión. La función devuelve el número de caracteres impresos y, si el 
número es negativo, suma uno para incluir el signo de menos.*/

int	ft_putnbr(int n)
{
	int		num;
	int		count;
	int		nn;

	num = n;
	nn = 0;
	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
		nn = 1;
	}
	count = ft_dec_count(num);
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
	else
		ft_putchar(num + '0');
	if (nn == 1)
		return (count + 1);
	return (count);
}

/*Esta funcion es invocada por ft_putnbr para gestionar el numero de 
valores que se usan en la funcion principal*/

int	ft_dec_count(long num)
{
	int	count;

	count = 1;
	while (num >= 10)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
