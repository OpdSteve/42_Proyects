/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:35:05 by ernesmar          #+#    #+#             */
/*   Updated: 2022/11/06 23:38:34 by dgarizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int					ft_check_dict(char **dictionary, int lines);
unsigned long long	ft_atoi(char *str);
char				*ft_iota(char *str);
int					ft_cheking(int argc, char **argv, char **path,
						unsigned long long *number);
void				ft_strcpy(char *origin, char *destiny);
int					fill_dictionary(char *path, char ***dictionary, int *lines);
int					find_in_dictionary(unsigned long long number,
						char **dictionary, int lines);
int					decompose(unsigned long long number, char **dictionary,
						int lines);
void				free_dictionary(char **dictionary, int lines);
void				ft_putstr(char *str);

int	main(int argc, char **argv)
{
	char				*path;
	unsigned long long	number;
	char				**dictionary;
	int					lines;

	path = (char *) malloc(sizeof(char *) * 200);
	ft_strcpy("./numbers.dict", path);
	if (ft_cheking(argc, argv, &path, &number) != -1)
	{	
		if (fill_dictionary(path, &dictionary, &lines) != -1)
		{
			if (ft_check_dict(dictionary, lines) != -1)
			{
				if (number == 0)
					ft_putstr("zero");
				else
					decompose(number, dictionary, lines);
			}
		}
		else
			write(1, "Dict Error\n", 11);
		free_dictionary(dictionary, lines);
	}	
	return (0);
}
