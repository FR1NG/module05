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

PresidentialPardonForm::PresidentialPardonForm():Form("presidential pardon", 25, 5), target("default")
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form("presidential pardon", 25, 5), target(target)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form): Form(form), target(form.getTarget())
{
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
    if (this == &form)
        return (*this);
    this->setIsSigned(form.getIsSigned());
    this->target = form.getTarget();
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
    std::cout << this->getTarget() << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
    return (this->target);
}

void    PresidentialPardonForm::setTarget(const std::string &target) {
    this->target = target;
}