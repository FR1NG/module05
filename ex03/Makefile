# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 09:37:15 by hchakoub          #+#    #+#              #
#    Updated: 2022/07/16 16:46:02 by hchakoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
NAME=a.out
SRC=main.cpp Bureaucrat.cpp GradeTooLowExceptionClass.cpp GradeTooHighExceptionClass.cpp\
 Form.cpp FormGradeTooLowException.cpp FormGradeTooHighException.cpp SignException.cpp\
 ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp 
OBJ=$(SRC:.cpp=.o)


all: $(NAME)
%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $^ -o $@

clean:
	rm -rf $(OBJ)

rmfiles:
	rm -rf *_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all
