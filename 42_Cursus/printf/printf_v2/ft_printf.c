/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:18:00 by eleon-go          #+#    #+#             */
/*   Updated: 2023/05/02 19:28:17 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Print "%" and use the especific start line for the funtions*/
static int	ft_printconfig(const char *str, int i, va_list *ap)
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
		x += ft_saver(va_arg(*ap, unsigned int long));
	}	
	return (x);
}

/*Principal funtion of printF, first step.*/
int	ft_printf(const char *str, ...)
{
	int		i;
	int		x;
	va_list	args;

	i = 0;
	x = 0;
	if (write(0, "", 0) == -1)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			x += ft_printconfig(str, i, &args);
		}
		else
			x += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (x);
}
