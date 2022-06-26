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
void myfunc()
{
    GradeTooLowExceptionClass excep;
    throw excep;
}

int main()
{
//    try {
//        Bureaucrat bc(0, "sakalolo");
//        std::cout << bc << std::endl;
//    } catch (Bureaucrat &e)
//    {
//        std::cout << "e.what()" <<std::endl;
//    }
    try
    {
        /* do some stuff with bureaucrats */
        myfunc();
    }
    catch (std::exception & e)
    {
        /* handle exception */
        std::cout << "hello from catch" << std::endl;
    }
    return (0);
}