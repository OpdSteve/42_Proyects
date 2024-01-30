/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:53:48 by eleon-go          #+#    #+#             */
/*   Updated: 2022/11/02 11:07:21 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 9;
	b = 0;
	div = a;
	mod = b;

	ft_div_mod(a, b, &div, &mod);
	printf("El valor de a es: %d\n", div);
	printf("El valor de b es: %d\n", mod);
	return (0);
}
