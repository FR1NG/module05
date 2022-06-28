# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 09:37:15 by hchakoub          #+#    #+#              #
#    Updated: 2022/06/23 09:37:16 by hchakoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
NAME=a.out
SRC=main.cpp GradeTooLowExceptionClass.cpp GradeTooHighExceptionClass.cpp Bureaucrat.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CPP) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all