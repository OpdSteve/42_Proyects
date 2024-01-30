/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:34:29 by ernesmar          #+#    #+#             */
/*   Updated: 2022/11/06 22:36:41 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_dictionary(char **dictionary, int lines)
{
	int	i;

	i = 0;
	while (i < lines - 1)
	{
		free(dictionary[i]);
		i++;
	}
	free(dictionary);
}
