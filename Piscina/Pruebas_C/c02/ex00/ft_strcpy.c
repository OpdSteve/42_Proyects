/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:46:49 by eleon-go@st       #+#    #+#             */
/*   Updated: 2022/11/08 19:51:25 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	p;

	p = 0;
	while (src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}
