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

#Variables
NAME	= libftprintf.a
BONUS	= .

CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
SRC_DIR = src/

#Color reference
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Sources
SRC_F_M = ft_printf ft_print_char ft_print_numeric \
		  ft_print_pointer ft_printf_utils

SRC_F_B = 

SRC_M 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_F_M)))
OBJ_M 		= 	$(addprefix $(SRC_DIR), $(addsuffix .o, $(SRC_F_M)))
SRC_B 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_F_B)))
OBJ_B 		= 	$(addprefix $(SRC_DIR), $(addsuffix .o, $(SRC_F_B)))

#Commands

$(NAME):	$(OBJ_M)
			ar	rcs	$(NAME)	$(OBJ_M)
			ranlib	$(NAME)
			@echo "$(GREEN)printf compiled$(DEF_COLOR)"

$(BONUS):	$(OBS_M) $(OBJ_B)
			ar	rcs	$(NAME)	$(OBJ_M) $(OBJ_B)
			ranlib	$(NAME)
			@echo "$(GREEN)printf compiled with bonus$(DEF_COLOR)"

all:	$(NAME)

bonus:	$(BONUS)

clean:	
		$(RM)	$(OBJ_M)	$(OBJ_B)
		@echo "$(CYAN)Cleaned object files$(DEF_COLOR)"

fclean:	clean
		$(RM)	$(NAME)
		@echo "$(CYAN)Cleaned executables and object files$(DEF_COLOR)"

re:		fclean	all
		@echo "$(GREEN)Cleaned and rebuilt everything$(DEF_COLOR)"
norm:
		@norminette $(SRC_DIR) | grep -v Norme -B1 || true

.PHONY:	all	bonus	clean	fclean	re
