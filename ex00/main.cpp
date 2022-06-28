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

void test()
{
    GradeTooLowExceptionClass grade;
    throw grade;
}

int main()
{
//    testing Bureaucrat with default values;


    try {
        Bureaucrat biro9rat;
        biro9rat.increment();
        biro9rat.decrement();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "===========================================" << std::endl;

//    testing bureaucrat with given values


    try {
        Bureaucrat biro9rat(1, "FR!NG");
        biro9rat.decrement();
        biro9rat.increment();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "===========================================" << std::endl;


// testing with case that throw exception


    try {
        Bureaucrat biro9rat(170, "2eme_7alouf");
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "===========================================" << std::endl;

//    testing increment with case that throw exception

    try {
        Bureaucrat biro9rat(1, "FR!NG");
        biro9rat.increment();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "===========================================" << std::endl;


//    testing increment with case that throw exception

    try {
        Bureaucrat biro9rat(150, "2eme_7alouf");
        biro9rat.decrement();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "===========================================" << std::endl;

    return (0);
}