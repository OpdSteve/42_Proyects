# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 19:57:38 by eleon-go@st       #+#    #+#              #
#    Updated: 2024/04/07 20:00:20 by eleon-go@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

DIR_LIBFT_H = ./libft_h
LIBFT_H = ./libft_h/libft_h.a
DIR_PUSH_SWAP = ./push_swap_v1/src

PUSH_SWAP_SRCS 		= 	

SUPER_SRC = ${addprefix ${DIR_PUSH_SWAP}/,${PUSH_SWAP_SRCS}}

OBJS			= ${SUPER_SRC:.c=.o}

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

ifdef DEBUG
	CC += -g
endif

all:			$(NAME) $(LIBFT_H)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)
$(LIBFT_H):
	@make -c $(DIR_LIBFT_H)
%.o: %.c
	@$(CC) -c $(CFLAGS) $(INCLUDE) $< -o $@

clean:
				$(RM) $(OBJS)
				make clean -c $(DIR_LIBFT_H)

fclean:			clean
				$(RM) $(NAME)
				make fclean -c $(DIR_LIBFT_H)

re:				fclean all

.PHONY:			all clean fclean re
