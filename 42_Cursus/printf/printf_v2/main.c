/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:56:03 by eleon-go          #+#    #+#             */
/*   Updated: 2023/05/04 15:35:22 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	check_leaks(void)
{
	system("leaks a.out");
}

// int	main(void)
// {
// 	ft_printf("Hola 42 world\n");
// 	ft_printf("Este es un número: %d\n", 42);
// 	ft_printf("Esta es una cadena: %s\n", "Hola");
// 	ft_printf("Esto es un carácter: %c\n", 'A');
// 	ft_printf("Este es un número sin signo: %u\n", 123456789);
// 	ft_printf("Este es un número en hexadecimal: %x\n", 255);
// 	ft_printf("Este es un puntero: %p\n",(void*)0x12345678);
// 	ft_printf("Este es un porcentaje: %%\n");
// 	ft_printf("Esta es una prueba de uso de write: %u\n", write(0, "", 0));
// 	atexit(check_leaks);
// 	return (0);
// }

// int	main(void)
// {
// 	char	*str =	NULL;

// 	ft_printf("Imprimiendo una cadena nula: %s\n", str);
// 	atexit(check_leaks);
// 	return (0);
// }

int	main(void)
{
	int				len;
	char			c;
	char			*string;
	int				nbr;
	int				ngbr;
	unsigned int 	unit;
	unit = -1;
	len = 0;
	c = 'Y';
	string = "Yes, strings are working 1234";
	nbr = 42;
	ngbr = -2147483647;
	len = ft_printf("characers: %c \n", c);
	printf("%i \n", len);
	len = printf("characers: %c \n", c);
	printf("%i \n", len);
	len = ft_printf("strings: %s \n", string);
	printf("%i \n", len);
	len = printf("strings: %s \n", string);
	printf("%i \n", len);
	len = ft_printf("decimal and integrers: %i \n", nbr);
	printf("%i \n", len);
	len = printf("decimal and integrers: %i \n", nbr);
	printf("%i \n", len);
	len = ft_printf("decimal and integrers: %i \n", ngbr);
	printf("%i \n", len);
	len = printf("decimal and integrers: %i \n", ngbr);
	printf("%i \n", len);
	len = ft_printf("hex: %x \n", nbr);
	printf("%i \n", len);
	len = printf("hex: %x \n", nbr);
	printf("%i \n", len);
	len = ft_printf("pointer: %p \n", string);
	printf("%i \n", len);
	len = printf("pointer: %p \n", string);
	printf("%i \n", len);
	len = ft_printf("percentage %% \n");
	printf("%i \n", len);
	len = printf("percentage %% \n");
	printf("%i \n", len);
	len = ft_printf("unsigned %u \n", unit);
	printf("%i \n", len);
	len = printf("unsigned %u \n", unit);
	printf("%i \n", len);
	len = ft_printf(" %d %d %d %d \n", INT_MAX, INT_MIN, 0, -42);
	printf("%i \n", len);
	len = printf(" %d %d %d %d \n", INT_MAX, INT_MIN, 0, -42);
	printf("%i \n", len);
}