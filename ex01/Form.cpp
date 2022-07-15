/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:52:39 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/28 16:52:40 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/28/22.
//

#include "Form.hpp"
#include "SignException.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("DEFAULT_FORM"), isSigned(false), requiredGradeToSign(1), requiredGradeToExecute(1)
{
    std::cout << "creating default form with highest privileges with the name 'DEFAULT_FORM'" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade): name(name), isSigned(false), requiredGradeToSign(signGrade), requiredGradeToExecute(execGrade) {

    if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException;
    else if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException;
    else

        std::cout << "creating form with this details ==> "<< *this << std::endl;
}

Form::Form(const Form &form):name(form.getName()), isSigned(form.getIsSigned()), requiredGradeToSign(form.getRequiredGradeToSign()), requiredGradeToExecute(form.getRequiredGradeToExecute()) {}

Form& Form::operator=(const Form &form) {
    if (this == &form)
        return (*this);
    this->isSigned = form.getIsSigned();
    return (*this);
}

Form::~Form() {}

const std::string& Form::getName() const {
    return (this->name);
}

bool Form::getIsSigned() const {
    return (this->isSigned);
}

int Form::getRequiredGradeToSign() const {
    return (this->requiredGradeToSign);
}

int Form::getRequiredGradeToExecute() const {
    return (this->requiredGradeToExecute);
}


void    Form::printDetails() const {
    std::cout << "=========================[DETAILS]==========================" << std::endl;
    std::cout << "name :" << this->name << std::endl;
    std::cout << "is signed :" << this->isSigned << std::endl;
    std::cout << "required grad to sign :" << this->requiredGradeToSign << std::endl;
    std::cout << "required grade to execute :" << this->requiredGradeToExecute << std::endl;
    std::cout << "============================================================" << std::endl;
}

void Form::beSigned(const Bureaucrat &charged) {
    if (this->getRequiredGradeToSign() < charged.getGrade())
        throw Form::GradeTooLowException;
    else
    {
        if (this->getIsSigned() == false)
            this->isSigned = true;
        else
        {
            SignException e;
            throw e;
        }
    }
}

FormGradeTooHighException Form::GradeTooHighException;
FormGradeTooLowException Form::GradeTooLowException;


std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << "name : " << form.getName() << ", is signed : " << (form.getIsSigned() ? "true" : "false" )<< ", required grad to sign : " << form.getRequiredGradeToSign()<< ", required grade to execute : " << form.getRequiredGradeToExecute();
    return (out);
};