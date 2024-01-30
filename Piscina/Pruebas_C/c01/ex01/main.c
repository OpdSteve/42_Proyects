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

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*punto1;
	int	**punto2;
	int	***punto3;
	int	****punto4;
	int	*****punto5;
	int	******punto6;
	int	*******punto7;
	int	********punto8;
	int	*********punto9;
	int	nbr;

	nbr = 24;
	punto1 = &nbr;
	punto2 = &punto1;
	punto3 = &punto2;
	punto4 = &punto3;
	punto5 = &punto4;
	punto6 = &punto5;
	punto7 = &punto6;
	punto8 = &punto7;
	punto9 = &punto8;

	printf("%d\n", nbr);
	ft_ultimate_ft(punto9);
	printf("%d\n", nbr);
	return (0);
}
