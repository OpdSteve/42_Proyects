/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:26:28 by eleon-go@st       #+#    #+#             */
/*   Updated: 2022/11/10 02:25:28 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;

	c = 0;
	index = 0;
	while (c <= (size / 2))
	{
		c = tab[index];
		tab[index] = tab[size -1 - index];
		tab[(size - (1 - index))] = c;
		index++;
	}
}
