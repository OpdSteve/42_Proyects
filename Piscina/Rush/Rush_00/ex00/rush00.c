/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:43:55 by alfofern          #+#    #+#             */
/*   Updated: 2022/10/23 16:24:32 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	f;

	f = 1;
	while (f <= y && y > 0)
	{
		c = 1;
		while (c <= x)
		{
			if (((((c == 1) || (c == x)) && (f == 1 || y == f))))
				ft_putchar ('o');
			else if (f == 1 || y == f)
				ft_putchar('-');
			else if ((c == 1) || (c == x))
				ft_putchar('|');
			else
				ft_putchar (' ');
				c++;
		}
		ft_putchar('\n');
		f++;
	}
}
