/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:29:36 by eleon-go          #+#    #+#             */
/*   Updated: 2023/11/20 20:10:39 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Cuenta la cantidad de palabras en la cadena
static int	ft_wordcount(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			j++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

//Calcula el tamaño de una palabra a partir de una posición dada en la cadena.
static int	ft_size_word(char const *str, char c, int i)
{
	int	size;

	size = 0;
	while (str[i] != c && str[i])
	{
		i++;
		size++;
	}
	return (size);
}

//Libera la memoria asignada para un arreglo de cadenas.
static void	ft_free(char **str, int j)
{
	while (j-- > 0)
	{
		free(str[j]);
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word;
	int		size;
	char	**str;

	i = 0;
	j = 0;
	word = ft_wordcount(s, c);
	str = (char **)malloc((word + 1) * (sizeof(char *)));
	if (!str)
		return (NULL);
	while (j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		str[j] = ft_substr(s, i, size);
		if (!(str[j]))
			return (ft_free(str, j), NULL);
		i += size;
		j++;
	}
	str[j] = 0;
	return (str);
}
