/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:37:13 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:19:15 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeTooLowExceptionClass.hpp"
#include "Form.hpp"
#include "FormGradeTooHighException.hpp"
#include "FormGradeTooLowException.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <time.h>
int main()
{
    Bureaucrat b(45, "3arroub");

    RobotomyRequestForm x("laforma");
//    std::cout << x.getRequiredGradeToSign() << std::endl;
    b.signForm(x);
    try{

    x.execute(b);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}