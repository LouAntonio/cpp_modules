# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/01 09:09:42 by lantonio          #+#    #+#              #
#    Updated: 2025/09/18 09:08:35 by lantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= intern

SRCS	=	./src/main.cpp \
			./src/AForm.cpp \
			./src/Intern.cpp \
			./src/Bureaucrat.cpp \
			./src/RobotomyRequestForm.cpp \
			./src/ShrubberyCreationForm.cpp \
			./src/PresidentialPardonForm.cpp \

CXX			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

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
