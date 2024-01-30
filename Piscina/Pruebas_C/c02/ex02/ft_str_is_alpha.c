/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:07:52 by eleon-go@st       #+#    #+#             */
/*   Updated: 2022/11/10 20:51:27 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != 0)
	{
		if (str[a] >= 'A' || str[a] <= 'Z')
		a++;
		if else (str[a] >= 'a' || stra[a] <= 'z')
		a++;
		else
			return (0);
	}
	return (1);
}
