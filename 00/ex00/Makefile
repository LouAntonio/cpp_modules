# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 14:49:39 by lantonio          #+#    #+#              #
#    Updated: 2025/01/16 15:41:34 by lantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

COMPILER	= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS		= megaphone.cpp

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