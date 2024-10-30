# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 13:13:45 by polmarti          #+#    #+#              #
#    Updated: 2024/10/25 13:13:47 by polmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	=	FragTrap

CC		=	c++

FLAGS	=	-g -Wall -Wextra -Werror -std=c++98 -MMD -fsanitize=address -pedantic 

SRC		=	FragTrap.cpp ClapTrap.cpp main.cpp ScavTrap.cpp

OBJ		=	$(SRC:.cpp=.o)

INCLUDE = 	ClapTrap.hpp FragTrap.hpp ScavTrap.hpp

DEPS	=	$(SRC:.cpp=.d)

#COLORS
GREEN		=	\033[38;5;154m
RED			=	\033[38;5;197m
PURPLE		=	\033[38;5;171m
BLUE		=	\033[38;5;14m
NC			=	\033[0m
YELLOW		=	\033[38;5;190m

all		:	$(NAME)

%.o:%.cpp Makefile
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME) 
		@echo "${PURPLE}CPP03 ex02 binary Compiled${NC}"

clean:
		@rm -rf $(OBJ) $(DEPS)
		@echo "${RED}CPP03 ex02 object removed${NC}"

fclean:		clean
		@rm -rf $(NAME)
		@echo "${RED}CPP03 ex02 binary removed${NC}"

re:		fclean all

-include $(DEPS)

.PHONY		:	all clean fclean re