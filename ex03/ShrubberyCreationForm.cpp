/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:24:21 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:24:22 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 7/15/22.
//

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "SignException.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():Form("shrubbery creation",145,137), target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("shrubbery creation" ,145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form): Form(form), target(form.getTarget())
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
    if (this == &form)
        return (*this);
    this->setIsSigned(form.getIsSigned());
    this->target = form.getTarget();
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if(executor.getGrade() > this->getRequiredGradeToExecute())
        throw Bureaucrat::GradeTooLowException;
    else
    {
        if(!this->getIsSigned())
        {
            NotSignedException ex;
            throw ex;
        }
        else
        {
            std::ofstream file;
            file.open(this->getTarget() + "_shrubbery");
            this->drowTrees(file);
            file.close();
        }
    }
}

void ShrubberyCreationForm::drowTrees(std::ofstream &file) const {

    std::string trees;
    trees += "               ,@@@@@@@,\n";
    trees += "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
    trees += "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
    trees += "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
    trees += "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
    trees += "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
    trees += "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
    trees += "       |o|        | |         | |\n";
    trees += "       |.|        | |         | |\n";
    trees += "r4v3n\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";

    file << trees;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string ShrubberyCreationForm::getTarget() const {
    return (this->target);
}

void ShrubberyCreationForm::setTarget(const std::string &target) {
    this->target = target;
}