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


class Bureaucrat {
private:
    const std::string name;
    int               grade;
    static GradeTooHighExceptionClass GradeTooHighException;
    static GradeTooLowExceptionClass GradeTooLowException;
public:
    Bureaucrat(int grade, std::string name);
    ~Bureaucrat();
    std::string const getName() const;
    int getGrade() const;
};
std::ostream& operator<<(std::ostream &out, const Bureaucrat& bc);

#endif
