/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:56:00 by eleon-go@st       #+#    #+#             */
/*   Updated: 2022/11/10 02:28:49 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size):

int	main(void)
{
	{
	int	tab[] = {0, 1, 2, 3, 4};
	int	size[] = 6;
	printf("%d\n", *tab);
	ft_rev_int_tab(tab, size);
	printf("%d\n", *tab);
	}
	return(0);
}