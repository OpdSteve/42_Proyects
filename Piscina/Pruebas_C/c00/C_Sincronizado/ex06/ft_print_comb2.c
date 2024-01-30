/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:43:11 by eleon-go          #+#    #+#             */
/*   Updated: 2022/10/28 00:03:41 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	z;

	x = 0;
	z = 0;
	while (x <= 98)
	{
		z = x + 1;
		while (z <= 99)
		{
			ft_write(x / 10 + '0');
			ft_write(x % 10 + '0');
			write (1, " ", 1);
			ft_write(z / 10 + '0');
			ft_write(z % 10 + '0');
			if (!(x == 98 && z == 99))
			{
				write (1, ", ", 2);
			}
			z++;
		}
		x++;
	}
}
