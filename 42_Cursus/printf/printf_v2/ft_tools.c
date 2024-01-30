/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:17:05 by eleon-go          #+#    #+#             */
/*   Updated: 2023/05/02 13:35:44 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Print caracters*/
int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

/*Control the length of decimal characters*/
int	ft_putnbr(int num)
{
	int	x;

	x = 0;
	if (num == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	else if (num > 9)
	{
		x += ft_putnbr(num / 10);
		x += ft_putnbr(num % 10);
	}
	else if (num < 0)
	{
		x += ft_putchar('-');
		x += ft_putnbr(-num);
	}
	else
		x += ft_putchar(num + '0');
	return (x);
}

int	ft_unsigned_int(unsigned int long num)
{
	int	x;

	x = 0;
	if (num >= 10)
	{
		x += ft_unsigned_int(num / 10);
		x += ft_putchar("0123456789"[num % 10]);
	}
	else
		x += ft_putchar("0123456789"[num % 10]);
	return (x);
}

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
