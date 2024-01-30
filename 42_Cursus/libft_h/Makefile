# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleon-go@student.42malaga.co <eleon-go>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 16:59:59 by eleon-go          #+#    #+#              #
#    Updated: 2023/09/26 14:59:10 by eleon-go@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE = -I ./includes

NAME	= libft.a

DIR_LIBFT = ./src/libft

DIR_PRINTF = ./src/printf

DIR_GET_NEXT_LINE = ./src/get_next_line

LIBFT_SRCS 		= 		ft_bzero.c \
						ft_isalnum.c \
						ft_isalpha.c \
						ft_isascii.c \
						ft_isdigit.c \
						ft_isprint.c \
						ft_memcpy.c \
						ft_memset.c \
						ft_strlen.c \
						ft_tolower.c \
						ft_toupper.c \
						ft_memmove.c \
						ft_strlcpy.c \
						ft_strlcat.c \
						ft_strchr.c \
						ft_strrchr.c \
						ft_strncmp.c \
						ft_memchr.c \
						ft_memcmp.c \
						ft_strnstr.c \
						ft_atoi.c \
						ft_strdup.c \
						ft_calloc.c \
						ft_putchar_fd.c \
						ft_putstr_fd.c \
						ft_putendl_fd.c \
						ft_putnbr_fd.c \
						ft_striteri.c \
						ft_strmapi.c \
						ft_substr.c \
						ft_strjoin.c \
						ft_strtrim.c \
						ft_itoa.c \
						ft_split.c \
						ft_lstadd_back.c \
						ft_lstadd_front.c \
						ft_lstclear.c \
						ft_lstdelone.c \
						ft_lstiter.c \
						ft_lstlast.c \
						ft_lstmap.c \
						ft_lstnew.c \
						ft_lstsize.c \

GET_NEXT_LINE_SRC	= 	get_next_line.c \
						get_next_line_utils.c \

PRINTF_SRC = 			ft_hexadecimal.c \
						ft_printf.c \
						ft_tools.c \

SUPER_SRC = ${addprefix ${DIR_LIBFT}/,${LIBFT_SRCS}} \
			${addprefix ${DIR_PRINTF}/,${PRINTF_SRC}} \
			${addprefix ${DIR_GET_NEXT_LINE}/,${GET_NEXT_LINE_SRC}}

OBJS			= ${SUPER_SRC:.c=.o}

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

ifdef DEBUG
	CC += -g
endif

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)
%.o: %.c
	@$(CC) -c $(CFLAGS) $(INCLUDE) $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
