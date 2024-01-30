/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:33:33 by eleon-go          #+#    #+#             */
/*   Updated: 2022/11/07 21:20:07 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char x, char i, char z)
{
	write(1, &x, 1);
	write(1, &i, 1);
	write(1, &z, 1);
	if (x != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	x;
	char	i;
	char	z;

	x = '0';
	i = '0';
	z = '0';
	while (x <= '9')
	{
	i = '0';
		while (i <= '9')
		{
		z = '0';
			while (z <= '9')
			{
				if (x < i && i < z)
					ft_write(x, i, z);
			z++;
			}
		i++;
		}
	x++;
	}
}
