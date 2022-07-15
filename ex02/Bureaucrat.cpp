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
#include "GradeTooLowExceptionClass.hpp"
#include "GradeTooHighExceptionClass.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat() : name("DEFAULT_NAME"), grade(150){
    std::cout << "creating bureaucrat with default values 'DEFAULT_NAME' as name '150' as grade" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): name(bureaucrat.getName()), grade(bureaucrat.getGrade()) {
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    this->grade = bureaucrat.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(int grade, const std::string name) :name(name){
    if (grade < 1)
       throw Bureaucrat::GradeTooHighException;
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException;
    else
        this->grade = grade;
    std::cout << "creating bureaucrat with values '"<< this->name <<"' as name '"<< this->grade <<"' as grade" << std::endl;
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
    {
        this->grade -= 1;
        std::cout << "Bureaucrat "<< this->name <<" upgraded to Grade : "<< this->grade << std::endl;
    }
    else
        throw Bureaucrat::GradeTooHighException;
}

void    Bureaucrat::decrement() {
    if (this->grade < 150)
    {
        this->grade += 1;
        std::cout << "Bureaucrat "<< this->name <<" downgraded to Grade : "<< this->grade << std::endl;
    }
    else
        throw Bureaucrat::GradeTooLowException;
}

void Bureaucrat::signForm(Form &form) const {
   try {
       form.beSigned(*this);
       std::cout << this->getName() << " signed " << form.getName() << std::endl;
   } catch (std::exception &e) {
        std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
   }
}

GradeTooLowExceptionClass Bureaucrat::GradeTooLowException;
GradeTooHighExceptionClass Bureaucrat::GradeTooHighException;