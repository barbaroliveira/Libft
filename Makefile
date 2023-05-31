# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bapereir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 15:17:33 by bapereir          #+#    #+#              #
#    Updated: 2023/05/13 15:18:34 by bapereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_isalpha.c \
		ft_memset.c ft_strchr.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_putnbr_fd.c

OBJS		= ${SRCS:.c=.o}

CC		= cc
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror

CL 		= ar -rc
RL 		= ar -s
${NAME}:	${OBJS}
		${CL} ${NAME} ${OBJS}
		${RL} ${NAME}
		echo 'libft is ready'
all:		${NAME}
clean:
		${RM} ${OBJS}
		echo 'Objects removed'
fclean:	clean
		${RM} ${NAME}
		echo 'Static library removed'
re:		fclean all
