/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:10:52 by ernesmar          #+#    #+#             */
/*   Updated: 2022/11/06 23:01:13 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned long long	ft_atoi(char *str);

void	count_size(char *buffer, int *lines, int *max_char_one_line)
{
	int	count;

	count = 0;
	*lines = 0;
	*max_char_one_line = 0;
	while (*buffer != '\0')
	{
		if (*buffer == '\n')
		{
			(*lines)++;
			if (*max_char_one_line < count)
				*max_char_one_line = count;
			count = 0;
		}
		else
			count++;
		buffer++;
	}
}

/*
 * @brief Turn a 1D char array into 2D
 *
 * @param buffer 1D array input 
 * @param output 2D array that is going to allocate buffer 
 * 
 * @return num of lines
 */
char	**separate_lines(char *buffer, int lines, int max_line)
{
	int		i;
	int		j;
	char	**output;

	i = 0;
	j = 0;
	output = (char **)malloc(sizeof(char *) * lines + 1);
	*output = (char *)malloc(sizeof(char) * max_line);
	while (*buffer != '\0')
	{
		if (*buffer == '\n')
		{
			output[j][i] = '\0';
			i = 0;
			j++;
			*(output + j) = (char *)malloc(sizeof(char) * max_line);
		}
		else
		{
			output[j][i] = *buffer;
			i++;
		}
		buffer++;
	}
	return (output);
}

int	calculate_file_length(char *path)
{
	int		fd;
	int		size;
	int		result;
	int		increment;
	char	*temp_buffer;

	size = 0;
	fd = open(path, O_RDONLY);
	temp_buffer = (char *)malloc(sizeof(char *) * 128);
	result = 128;
	increment = 128;
	while (result > 0)
	{
		result = read(fd, temp_buffer, increment);
		size = size + increment;
	}
	free(temp_buffer);
	close(fd);
	return (size);
}

/*
 * 
 * @brief Reads the dictonary from a path
 *
 * @param path where the dictionary is located. This file is only READONLY.
 * 
 * @return Two dimensional array with each line in a row.
 */
int	fill_dictionary(char *path, char ***dictionary_pointer, int *lines)
{
	int		fd;
	char	*buffer;
	int		size;
	int		max_line;
	char	**dictionary;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	size = calculate_file_length(path);
	buffer = (char *) malloc(sizeof(char) * size);
	read(fd, buffer, size);
	count_size(buffer, lines, &max_line);
	dictionary = separate_lines(buffer, *lines, max_line);
	free(buffer);
	free(path);
	close(fd);
	*dictionary_pointer = dictionary;
	return (0);
}

int	find_in_dictionary(unsigned long long number, char **dictionary, int lines)
{
	int					pos;
	int					best_pos;
	long long			dist;
	long long			min_dist;

	pos = 0;
	best_pos = -1;
	min_dist = 1844674407370955161;
	while (pos < lines)
	{
		dist = number - ft_atoi(*(dictionary + pos));
		if (min_dist > dist && dist > 0)
		{
			min_dist = dist;
			best_pos = pos;
		}
		if (ft_atoi(*(dictionary + pos)) == number)
			return (pos);
		pos++;
	}
	return (best_pos);
}
