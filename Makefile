# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmohr <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/04 01:32:52 by tmohr             #+#    #+#              #
#    Updated: 2016/02/26 12:06:52 by ghery            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_printf

CC		=	gcc

SRCS	=	ft_printf.c

OBJECTS	=	ft_printf.o

LIB		=	ft_printf.h

LIBNAME	=	ft_printf.a

LIBS	=	ft_printf.a libft/libft.a

FLAG	=	-Wall -Wextra -Werror

RM		=	rm -f

CLEAN	=	clean

all		:	$(NAME)

$(NAME)	:	$(OBJECTS)
			make -C libft
			$(CC) $(FLAG) -c -I $(LIB) $(SRCS)
			ar rc $(LIBNAME) $(OBJECTS)
			$(CC) $(FLAG) -o $(NAME) main.c $(LIBS)
clean	:	
			$(RM) $(OBJECTS)

fclean	:	clean
			make -C libft/ fclean
			$(RM) $(NAME) ft_printf.a

re		:	fclean all
