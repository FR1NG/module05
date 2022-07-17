/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:45:58 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/16 16:38:54 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 //
// Created by Hamza Chakoubi on 7/15/22.
//

#include "PresidentialPardonForm.hpp"
#include "SignException.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("default", 25, 5) 
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form(target, 25, 5)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form): Form(form)
{
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
    if (this == &form)
        return (*this);
    this->setIsSigned(form.getIsSigned());
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const 
{
    if (this->getRequiredGradeToExecute() < executor.getGrade())
        throw Form::GradeTooLowException;
    else if (!this->getIsSigned())
    {
        NotSignedException exp;
        throw exp;
    }
    std::cout << this->getName() << "has been pardoned by Zaphod Beeblebrox." << std::endl; 
}