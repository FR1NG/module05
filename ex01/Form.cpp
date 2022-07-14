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
Form::Form(): name("DEFAULT_FORM"), isSigned(false), requiredGradeToExecute(1), requiredGradeToSign(1)
{
    std::cout << "creating default form with highest privileges with the name 'DEFAULT_FORM'" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade): name(name), isSigned(false){

    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException;
    else if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException;
    else
    {
//        , requiredGradeToSign(signGrade), requiredGradeToExecute(execGrade)
        this->requiredGradeToSign = signGrade;
        this->requiredGradeToExecute = execGrade;
        std::cout << "creating form with this details" << std::endl;
        this->printDetails();
    }
}


//Form::Form(const Form &form): name(form.name), isSigned(form.isSigned), requiredGradeToSign(form.requiredGradeToSign), requiredGradeToExecute(form.requiredGradeToExecute) {}

Form::Form(const Form &form):name(form.getName()), isSigned(form.getIsSigned()), requiredGradeToSign(form.getRequiredGradeToSign()), requiredGradeToExecute(form.getRequiredGradeToExecute()) {}

Form& Form::operator=(const Form &form) {
    if (this == &form)
        return (*this);
    this->isSigned = form.getIsSigned();
    this->requiredGradeToSign = form.getRequiredGradeToSign();
    this->requiredGradeToExecute = form.getRequiredGradeToExecute();
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
//        this->isSigned = true;
//        std::cout << "form hase been signed by " << charged.getName() << std::endl;
    }
}

FormGradeTooHighException Form::GradeTooHighException;
FormGradeTooLowException Form::GradeTooLowException;
