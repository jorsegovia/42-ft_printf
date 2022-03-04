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

SRCS_M = 

SRCS_B = 

#PREF_M =
#PREF_B = 

OBJS_M = $(SRCS:.c=.o)
OBJS_B = $(SRCS:.c=.o)

#SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
#OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))


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

clean:	$(RM)	$(OBJS)	$(OBJS_A)	$(OBJS_B)

fclean:	clean
		$(RM)	$(NAME)

re:		fclean	all

.PHONY:	all	bonus	clean	fclean	re
