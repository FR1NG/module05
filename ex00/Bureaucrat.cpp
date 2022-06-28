/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:37:04 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/23 09:37:05 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {};

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): name(bureaucrat.getName()), grade(bureaucrat.getGrade()) {}

//Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
//    this->name = bureaucrat.getName();
//    this->grade = bureaucrat.getGrade();
//}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(int grade, const std::string name) :name(name){
//    if (grade < 1)
//       throw Bureaucrat::GradeTooHighException;
//    else if (grade > 150)
//        throw Bureaucrat::GradeTooLowException;
//    else
//        this->grade = grade;
//    throw GradeTooLowException;
}

const std::string& Bureaucrat::getName() const {
    return (this->name);
}

int   Bureaucrat::getGrade() const {
    return (this->grade);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bc)
{
    out << bc.getName() << " , bureaucrat grade  " << bc.getGrade();
    return (out);
}

void    Bureaucrat::increment() {
    if (this->grade > 1)
        this->grade -= 1;
    else
        NULL;
//        throw Bureaucrat::GradeTooHighException;
}

void    Bureaucrat::decrement() {
    if (this->grade < 150)
        this->grade += 1;
    else
        NULL;
//        throw Bureaucrat::GradeTooLowException;
}

