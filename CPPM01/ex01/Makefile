# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/22 16:36:44 by lantonio          #+#    #+#              #
#    Updated: 2025/01/23 08:59:02 by lantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= moar_brainz

COMPILER	= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS		= ./src/main.cpp \
			  ./src/Zombie.cpp \

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