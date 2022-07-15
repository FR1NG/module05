/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:37:13 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/23 09:37:14 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeTooLowExceptionClass.hpp"
#include "Form.hpp"
#include "FormGradeTooHighException.hpp"
#include "FormGradeTooLowException.hpp"


int main()
{
    //    case every thing is good
    try {
        Form form("CONTRATTO", 150, 1);
        Bureaucrat b(1, "rvn");
        b.signForm(form);
        b.signForm(form);
        try {
            form.beSigned(b);
        } catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << form << std::endl ;

    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "=========================[ other test ]=========================" << std::endl;
    //    let get some exceptions
    try {
        Form form("CONTRATTO_DE_LABORO", 160, 0);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "=========================[ other test ]=========================" << std::endl;
    //    signing grade exception
    try {
        Form form("CONTRATTO", 2, 1);
        Bureaucrat b(19, "Morgan");
        b.signForm(form);
        b.signForm(form);
        try {
            form.beSigned(b);
        } catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << form << std::endl ;

    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "=========================[ other test ]=========================" << std::endl;
    //    signing grade exception
    try {
        Form form("CONTRATTO", 2, 1);
        Bureaucrat b(19, "Morgan");
        b.signForm(form);
        b.signForm(form);
        try {
            form.beSigned(b);
        } catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << form << std::endl ;

    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    return (0);
}