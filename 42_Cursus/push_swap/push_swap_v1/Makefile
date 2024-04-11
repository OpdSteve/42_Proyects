# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 20:43:42 by eleon-go@st       #+#    #+#              #
#    Updated: 2024/04/11 21:07:25 by eleon-go@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap.a

PUSH_SWAP_SRCS 		= 	conditioners.c \


OBJS			= ${PUSH_SWAP_SRCS:.c=.o}

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
INCLUDE			= -I./libreria/includes
LIBDIR			= ./libft_h
LIB				= $(LIBDIR)/libft.a

ifdef DEBUG
	CC += -g
endif

all:			$(LIB) $(NAME)

$(LIB):
	$(MAKE) -C $(LIBDIR)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)
				@echo "> La parte obligatoria se copilo correctamente✅"
%.o: %.c
	@$(CC) -c $(CFLAGS) $(INCLUDE) $< -o $@

clean:
				$(RM) $(OBJS)
				$(MAKE) -C $(LIBDIR) clean
				@echo "> Se borraron todos los .o correctamente✅"

fclean:			clean
				$(RM) $(NAME)
				$(MAKE) -C $(LIBDIR) fclean
				@echo "> Se borraron todos los archivos .a correctamente✅"

re:				fclean all
				@echo "> Los archivos volvieron a ser copilados correctamente✅"

.SILENT:
.PHONY:			all clean fclean re