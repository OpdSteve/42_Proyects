/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:37:19 by eleon-go          #+#    #+#             */
/*   Updated: 2023/04/18 21:22:23 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*toma un número sin signo y un puntero a una cadena de caracteres que 
representa los dígitos hexadecimales. La función utiliza la recursión para 
imprimir los dígitos hexadecimales en orden inverso.La función devuelve el 
número de caracteres que se imprimieron como resultado. */

int	ft_puthexa(size_t num, char *hexa)
{
	int	count;

	count = ft_hexa_count(num);
	if (num >= 16)
		ft_puthexa(num / 16, hexa);
	ft_putchar(hexa[num % 16]);
	return (count);
}

/*Contador de caracteres hexadecimales*/
int	ft_hexa_count(size_t num)
{
	int	count;

	count = 1;
	while (num >= 16)
	{
		num = num / 16;
		count++;
	}
	return (count);
}

/*recibe un número sin signo y un puntero a una cadena de caracteres, y se 
utiliza para imprimir el valor hexadecimal del número en la salida 
estándar, precedido por "0x". Si el número es cero, solo se imprime "0".
La función cuenta la cantidad de dígitos hexadecimales en el número y 
utiliza la función ft_puthexa para imprimir los dígitos hexadecimales en 
orden inverso. Luego, la función devuelve el número de caracteres impresos 
como resultado de la operación de impresión.*/
int	ft_putmem(unsigned long long num, char *hexa)
{
	size_t	count;

	count = 0;
	count += ft_putstr("0x");
	if (!num)
		count += ft_putchar('0');
	else
	{
		count += ft_hexa_count(num);
		ft_puthexa(num, hexa);
	}
	return (count);
}
