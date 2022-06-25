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

Bureaucrat::Bureaucrat(int grade, const std::string name) :name(name){
    if (grade < 1)
       throw Bureaucrat::GradeTooHighException;
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException;
    else
        this->grade = grade;
}

std::string const Bureaucrat::getName() const {
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

Bureaucrat::~Bureaucrat(){}

