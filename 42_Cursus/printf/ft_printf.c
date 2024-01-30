/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:31:27 by eleon-go          #+#    #+#             */
/*   Updated: 2023/04/19 14:08:28 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*La función recorre cada carácter de la cadena de entrada y si encuentra el 
signo %, llama a la función ft_printfconfig para imprimir el tipo de argumento 
indicado por el siguiente carácter. Si no encuentra el signo %, simplemente 
llama a la función ft_putchar para imprimir el carácter en la salida estándar 
y devuelve el número total de caracteres impresos.*/

int	ft_printf(char const *content, ...)
{
	int		count;
	int		result;
	va_list	args;

	va_start(args, content);
	count = 0;
	result = 0;
	while (content[count])
	{
		if (content[count] == '%')
			result += ft_printfconfig(args, content[++count]);
		else
			result += ft_putchar(content[count]);
		count++;
	}
	va_end(args);
	return (result);
}
