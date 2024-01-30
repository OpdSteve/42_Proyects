/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decompose.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 03:18:14 by ernesmar          #+#    #+#             */
/*   Updated: 2022/11/06 22:49:53 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int					ft_putstr(char *str);
int					find_in_dictionary(unsigned long long number,
						char **dictionary, int lines);
char				*ft_iota(char *str);
unsigned long long	ft_atoi(char *str);

int	decompose(unsigned long long number, char **dictionary, int lines)
{
	char				*base_word;
	int					index;
	unsigned long long	div;
	unsigned long long	mod;

	index = find_in_dictionary(number, dictionary, lines);
	base_word = ft_iota(dictionary[index]);
	div = number / ft_atoi(dictionary[index]);
	mod = number % ft_atoi(dictionary[index]);
	if (div > 1 || ft_atoi(dictionary[index]) > 99)
	{
		decompose(div, dictionary, lines);
		write(1, " ", 1);
	}
	ft_putstr(base_word);
	if (mod > 0)
	{
		write(1, " ", 1);
		decompose(mod, dictionary, lines);
	}
	return (1);
}
