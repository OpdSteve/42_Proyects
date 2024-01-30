/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:53:48 by eleon-go          #+#    #+#             */
/*   Updated: 2022/10/28 23:20:58 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	punto1;
	int	punto2;
	int	a;
	int	b;

	punto1 = 21;
	punto2 = 22;
	a = punto1;
	b = punto2;
	ft_swap(&a, &b);
	printf("El valor de punto1 deberia ser 21 y es: %d\n", a);
	printf("El valor de punto2 deberia ser 22 y es: %d\n", b);
	return (0);
}
