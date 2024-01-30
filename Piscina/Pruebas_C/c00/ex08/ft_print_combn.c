/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:33:33 by eleon-go          #+#    #+#             */
/*   Updated: 2022/10/28 11:31:16 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char x, char u, char z)
{
	char	c;

	while (x < u)
	{
		c = '0' + x;
		write(1, &c, 1);
		x++;
	}
	c = '0' + z;
	write(1, &c, 1);
	if (z != 9)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	x;
	int	z;
	int	c;

	if (n > 0 && n < 10)
	{
		if (n == 1)
		{
			write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9,", 28);
		}
		else
		{
			x = 0;
			z = n - 1;
			while (z <= 9)
			{
			c = z;
				while (c <= 9)
				{
					ft_write(x, z, c);
				c++;
				}
			x++;
			z++;
			}
		}
	}
}
