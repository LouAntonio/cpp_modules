# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 13:09:15 by lantonio          #+#    #+#              #
#    Updated: 2025/01/23 15:55:57 by lantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= humans

COMPILER	= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS		= ./src/main.cpp \
			  ./src/HumanA.cpp \
			  ./src/HumanB.cpp \
			  ./src/Weapon.cpp \

OBJS		= $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@$(COMPILER) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32mSUCESS!\033[0m"

%.o:%.cpp
	@$(COMPILER) $(FLAGS) -c $< -o $@

all: $(NAME)

clean :
	@rm -rf $(OBJS)
	@echo "Cleaning objects"

fclean : clean
	@rm -rf $(NAME)
	@echo "cleaning executable"

re : fclean all

.PHONY : all clean fclean re