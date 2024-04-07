/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:57:27 by eleon-go@st       #+#    #+#             */
/*   Updated: 2024/04/07 20:10:30 by eleon-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft_h/includes/libft.h"
# include "../libft_h/includes/ft_printf.h"
# include "../libft_h/includes/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>

typedef struct s_stack
{
	int					*stack_a;
	int					*stack_b;
	int					len_stack_a;
	int					max_a;
	int					len_stack_b;
	int					max_size;
	char				**tmpchr;
}					t_stack;

#endif