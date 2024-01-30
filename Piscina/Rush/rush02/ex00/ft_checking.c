/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:09:01 by dgarizad          #+#    #+#             */
/*   Updated: 2022/11/06 23:25:20 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned long long	ft_atoi(char *str);
void				ft_strcpy(char *origin, char *dest);
int					ft_is_neg(char *str);
int					find_in_dictionary(int number, char **dictionary,
						int lines);

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	p;

	p = 0;
	while (str[p] != 0)
	{
		ft_write(str[p]);
		p++;
	}
}

int	ft_cheking(int argc, char **argv, char **path, unsigned long long *number)
{
	if (argc <= 1 || argc > 3)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	if (argc == 2)
	{
		*number = ft_atoi(argv[1]);
		if (ft_is_neg(argv[1]) == -1)
		{
			ft_putstr("Error\n");
			return (-1);
		}
	}
	else
	{
		ft_strcpy(argv[1], *path);
		*number = ft_atoi(argv[2]);
		if (ft_is_neg(argv[2]) == -1)
		{
			ft_putstr("Error\n");
			return (-1);
		}
	}
	return (0);
}

int	is_int_dict(unsigned long long i, char **dictionary, int lines)
{
	int	index;

	if (i == 0)
	{
		while (lines-- > 0)
			if (ft_atoi(dictionary[lines]) == 0)
				return (0);
		return (-1);
	}
	index = find_in_dictionary(i, dictionary, lines);
	if (ft_atoi(dictionary[index]) != i)
		return (-1);
	return (0);
}

int	ft_check_dict(char **dictionary, int lines)
{
	unsigned long long	i;
	int					j;

	i = 0;
	j = 0;
	while (j < lines - 1)
	{
		if (is_int_dict(i, dictionary, lines) == -1)
		{
			ft_putstr("Dict Error\n");
			return (-1);
		}
		if (i < 20)
			i++;
		else if (i < 100)
			i = i + 10;
		else if (i < 1000)
			i = i * 10;
		else
			i = i * 10e2;
		j++;
	}
	return (0);
}
