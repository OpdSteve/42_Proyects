/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 02:28:36 by ernesmar          #+#    #+#             */
/*   Updated: 2022/11/06 02:28:39 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *origin, char *dest)
{
	int	i;

	i = 0;
	while (*(origin) != '\0')
	{
		*(dest + i) = *origin;
		origin++;
		i++;
	}
	return (dest);
}
