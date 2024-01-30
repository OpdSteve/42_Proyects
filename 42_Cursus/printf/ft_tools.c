/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:54:07 by eleon-go          #+#    #+#             */
/*   Updated: 2023/04/19 14:22:50 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/*Devulve un contador con el numero de caracteres impresos. Esta a su vez,
recorre una cadena de caracteres imprimiendola con putchar*/
int	ft_putstr(char *str)
{
	int	x;

	x = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
	return (x);
}


/*La función determina el tipo de formato de salida a través de la variable c, 
y luego llama a las funciones correspondientes, devuelve el numero total de 
caracteres impresos*/
static int	ft_printfconfig(const char *str, int i, va_list *ap)
{
	int	x;

	x = 0;
	if (str[i] == 'c')
		x += ft_putchar((char)va_arg(*ap, int));
	else if (str[i] == '%')
		x += ft_putchar('%');
	else if (str[i] == 's')
		x += ft_putstr(va_arg(*ap, char *));
	else if (str[i] == 'd' || str[i] == 'i')
		x += ft_putnbr(va_arg(*ap, int));
	else if (str[i] == 'u')
		x += ft_unsigned_int(va_arg(*ap, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		x += ft_hexadecimal(va_arg(*ap, unsigned int), str[i]);
	else if (str[i] == 'p')
	{
		x += ft_putstr("0x");
		x += ft_pointer(va_arg(*ap, unsigned int long));
	}	
	return (x);
}
