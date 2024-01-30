/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarizad <dgarizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 01:59:58 by dgarizad          #+#    #+#             */
/*   Updated: 2022/11/06 19:46:00 by dgarizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_num(char str)
{
	int	flag;

	flag = 1;
	if (str < 48 || str > 57)
		flag = 0;
	return (flag);
}

int	ft_is_neg(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32)
		str++;
	while (str[i] != '\0')
	{
		if (ft_is_num(str[i]) == 0)
			return (-1);
		i++;
	}
	return (0);
}

unsigned long long	ft_atoi(char *str)
{
	int					digit;
	unsigned long long	i;
	unsigned long long	number;
	int					sign;

	i = 0;
	sign = 1;
	while (str[i] == 32)
		str++;
	if (str[i] == '-' && ft_is_num(str[i + 1]) == 1)
	{	
		sign = -1;
		str++;
		return (-1);
	}
	i = 0;
	number = 0;
	while (ft_is_num(str[i]) == 1)
	{
		digit = str[i++] - '0';
		number = (number * 10) + digit;
	}
		number = number * sign;
	return (number);
}

int	ft_is_alpha(char str)
{
	int	flag;

	flag = 1;
	if (str > 'z' || str < 'A')
	{
		flag = 0;
	}
	if (str > 'Z' && str < 'a')
	{
		flag = 0;
	}
	return (flag);
}

char	*ft_iota(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ':')
		str++;
	str++;
	while (str[i] == 32)
		str++;
	if (ft_is_alpha(str[i]) == 0)
	{
		return ("-1");
	}
	while (ft_is_alpha(str[i]) == 1)
	{
		i++;
	}
		str[i] = '\0';
	return (str);
}
