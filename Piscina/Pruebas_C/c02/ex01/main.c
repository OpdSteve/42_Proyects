/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 05:31:59 by eleon-go@st       #+#    #+#             */
/*   Updated: 2022/11/08 21:26:08 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char original[] = "Hola";
	char cambio[] = "caracola";
	unsigned int	n;

	n = 9;

	printf("Antes original:\n%s\n", original);
	printf("Antes cambio:\n%s\n", cambio);

	ft_strncpy(original, cambio, n);

	printf("Ahora original:\n%s\n", original);
	printf("Ahora cambio:\n%s\n", cambio);

	return (0);
}
