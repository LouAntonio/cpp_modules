# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 11:02:12 by lantonio          #+#    #+#              #
#    Updated: 2025/06/20 13:30:48 by lantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= abstract_class

CXX			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS		=	./src/main.cpp \
				./src/Animal.cpp \
				./src/Brain.cpp \
				./src/Cat.cpp \
				./src/Dog.cpp \
				./src/WrongAnimal.cpp \
				./src/WrongCat.cpp \

OBJS		= $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32mSUCCESS!\033[0m"

%.o:%.cpp
	@$(CXX) $(FLAGS) -c $< -o $@

all: $(NAME)

clean :
	@rm -rf $(OBJS)
	@echo "Cleaning objects"

fclean : clean
	@rm -rf $(NAME)
	@echo "cleaning executable"

re : fclean all

.PHONY : all clean fclean re
