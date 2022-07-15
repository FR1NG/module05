/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:24:15 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:24:16 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 7/15/22.
//

#include "RobotomyRequestForm.hpp"
#include "SignException.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm(): Form("default", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form(target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) :Form(form)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &form) {
    if (this == &form)
        return (*this);
    this->setIsSigned(form.getIsSigned());
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->getRequiredGradeToExecute())
        throw Form::GradeTooLowException;
    else if (!this->getIsSigned())
    {
        NotSignedException exp;
        throw exp;
    }
    int ods;
    this->makeDrillibgNoise();
    srand(time(NULL));
    ods = rand() % 2;
    if (ods)
        std::cout << this->getName() << " has been robotomized successfully" << std::endl;
    else
        std::cout << "the robotomy failed" << std::endl;
}

void RobotomyRequestForm::makeDrillibgNoise() const {
    std::string art;
    art += "ZZzzzZZZzZzZZZZzzzzZZZ\n";
    art += "                      _________\n";
    art += "                     /~~~~~~~~~\\\n";
    art += "                    (===========) ______________\n";
    art += "                    |  ||  ||   ||~~~~~~~~~~~~~~|\n";
    art += "                    |  ||  ||   ||        (@)   |\n";
    art += "                    |  ||  ||   ||        //    |\n";
    art += "                    |  ||  ||   ||       //     |\n";
    art += "                    |  ||  ||   ||(@)===(o)     |\n";
    art += "                    |  ||  ||   ||        \\\\    |\n";
    art += "                    |           ||         \\\\   |\n";
    art += "                    |~~~~~~~~~~~||         (@)  |\n";
    art += "                    |___________||              |\n";
    art += "                    (___________)|              |\n";
    art += "                     (_________) |    @--(o)    |\n";
    art += "                       |     |   (              (\n";
    art += "                       |     |    \\      (o)     \\\n";
    art += "                       |     |     \\     /        \\\n";
    art += "                       |     |      \\   @          \\\n";
    art += "                       |_____|       \\              \\\n";
    art += "                       |_____|        \\              \\\n";
    art += "                       \\_____/         \\              \\\n";
    art += "                         |/|            \\              \\\n";
    art += "                      )  |/|             \\              \\\n";
    art += "                     (  ,|/|  / '         \\              \\\n";
    art += "                      \\  |/| ( '           \\              \\\n";
    art += "                _____  ) |/|' )         _   \\              \\\n";
    art += "          |    |     |___|/|___________| |   \\              \\\n";
    art += "          |====|     |_________________| |    \\              \\\n";
    art += "         =|   _|      |_______________|  |     \\              \\\n";
    art += "             |                           |      \\              \\\n";
    art += "        _____|___________________________|_______)______________)\n";
    art += "       |                                                        |\n";
    art += "       |                                                        |\n";
    art += "       |________________________________________________________|\n";
    std::cout << art << std::endl;
}