/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:52:42 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/28 16:52:43 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/28/22.
//

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <iomanip>
#include "FormGradeTooHighException.hpp"
#include "FormGradeTooLowException.hpp"

class Bureaucrat;

class Form {
private:
    const std::string name;
    bool isSigned;
    const int requiredGradeToSign;
    const int requiredGradeToExecute;

public:
    Form();
    Form(std::string name, int signGrade, int execGrade);
    Form(const Form& form);
    Form& operator=(const Form& form);
    ~Form();

    const std::string& getName(void) const;
    bool getIsSigned(void) const;
    int getRequiredGradeToSign(void) const;
    int getRequiredGradeToExecute(void) const;
    void    printDetails(void) const;
    void    beSigned(const Bureaucrat& charged);


    static FormGradeTooHighException GradeTooHighException;
    static FormGradeTooLowException GradeTooLowException;
};
std::ostream& operator<<(std::ostream& out, const Form& form);


#endif //FORM_HPP
