/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:37:07 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/23 09:37:08 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "GradeTooHighExceptionClass.hpp"
#include "GradeTooLowExceptionClass.hpp"
#include "Form.hpp"

class Bureaucrat {
private:
    const std::string name;
    int               grade;

public:
    static GradeTooHighExceptionClass GradeTooHighException;
    static GradeTooLowExceptionClass GradeTooLowException;
    Bureaucrat();
    Bureaucrat(const Bureaucrat& bureaucrat);
    Bureaucrat& operator=(const Bureaucrat& bureaucrat);
    ~Bureaucrat();

    Bureaucrat(int grade, std::string name);
    const std::string& getName() const;
    int getGrade() const;
    void    increment(void);
    void    decrement();
    void    signForm(const Form &form) const;
};
std::ostream& operator<<(std::ostream &out, const Bureaucrat& bc);

#endif
