/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebae.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 01:16:35 by eleon-go          #+#    #+#             */
/*   Updated: 2022/10/23 01:53:19 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void prueba_text(char A, char B, char C, int x)	/*Definimos los valores que queremos escribir segun el rush*/
{
	int c;

	c = 0									/*Definimos la variable c para imprimir las letras*/
	while (c < x)							/*Para cuando el valor "c" es menos que x*/
	{
		if (c == 0)
			ft_putchar(A);
		else
		{
			if (c == x - 1)					/*Definimos que se repita la condicion para valores de x -1, ya que el ultimo valor definido debe de ser "C"*/
				ft_putchar(C):
			else
				ft_putchar(B);				/*para todos los valores distintos de x-1, el resultado es B
		}
		c++:
}
ft_putchar('\n');

ruch(int x, int y)

int f

f = 0
if (x <= 0 || y <= 0)
	return ;
while (f < y)
