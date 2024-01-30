/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 05:31:59 by eleon-go@st       #+#    #+#             */
/*   Updated: 2022/11/08 21:23:40 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char original[] = "Quien es ese hombre?";
	char cambio[] = "Que me mira y me hackea";
	char *dest;

	printf("Antes original:\n%s\n", original);
	printf("Antes cambio:\n%s\n", cambio);
	dest = ft_strcpy(original, cambio);
	printf("Ahora original:\n%s\n", original);
	printf("Ahora cambio:\n%s\n", cambio);
	return (0);
}
