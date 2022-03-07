# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 12:10:33 by jsegovia          #+#    #+#              #
#    Updated: 2022/03/04 12:10:34 by jsegovia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = src/
OBJ_DIR = obj/

SRC_F_M = ft_printf.c ft_print_char.c ft_print_numeric.c \
		  ft_print_pointer.c ft_printf_utils.c

SRC_F_B = 

OBJS_M = $(SRCS_M:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

SRC_M 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_F_M)))
OBJ_M 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_F_M)))
SRC_B 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_F_B)))
OBJ_B 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_F_B)))


CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

NAME	= libftprintf.a
BONUS	= .

$(NAME):	$(OBJS_M)
			ar	rcs	$(NAME)	$(OBJS_M)
			ranlib	$(NAME)

$(BONUS):	$(OBJS_M) $(OBJS_B)
			ar	rcs	$(NAME)	$(OBJS_M) $(OBJS_B)
			ranlib	$(NAME)

all:	$(NAME)

bonus:	$(BONUS)

clean:	
		$(RM)	$(OBJS_M)	$(OBJS_B)

fclean:	clean
		$(RM)	$(NAME)

re:		fclean	all

.PHONY:	all	bonus	clean	fclean	re
