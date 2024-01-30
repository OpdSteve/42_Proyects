/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:43:55 by alfofern          #+#    #+#             */
/*   Updated: 2022/10/23 13:30:06 by alfofern         ###   ########.fr       */
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
			if ((c == 1 && f == 1) || (f == y && c == x && f != 1 && f != 5 && f == y && c == x && f != 1 && y >= 3))
					ft_putchar ('A');
				else if (( f == 1 && c == x)|| (c == 1 && y == f))
					ft_putchar('C');
				else if ((c == 1) || (f == 1) || (c == x) || (f == y))
					ft_putchar('B');
				else
					ft_putchar (' ');   
				c++;
			}
			ft_putchar('\n');
			f++;
	}
}
