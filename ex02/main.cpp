/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:37:13 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/16 18:43:58 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

void testRobotomy()
{
    std::cout << "all fine test > ================================" << std::endl;
    try {
        Bureaucrat b(1, "3allal");
        RobotomyRequestForm f("rForm");

        b.signForm(f);
        try
        {
            f.execute(b);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    } catch (std::exception &e) {
        
    }
}

void testShrubbery()
{
    
    std::cout << "s test";
}

void testPresidetial()
{
    std::cout << "p test";
    
}

int main(int c, char **v)
{
    (void)v;
    std::string arg;
    
    if(c == 2)
    {
        arg = v[1];
        if (arg == "--help" || arg == "-h")
        {
            std::cout << "-S : to test ShrubberyCreationForm class" << std::endl;
            std::cout << "-R : to test RobotomyRequestForm class" << std::endl;
            std::cout << "-P : to test PresidentialPardonForm class" << std::endl;
            std::cout << "-a : to test all classes" << std::endl;
        }
        else if (arg == "-S")
            testShrubbery();
        else if (arg == "-R")
            testRobotomy();
        else if (arg == "-P")
            testPresidetial();
        else if (arg == "-a")
        {
            testShrubbery();
            testRobotomy();
            testPresidetial();
        }
        else
            std::cerr << "Invalid arguments" << std::endl << "--help for more info" << std::endl;
    }
    else
        std::cerr << "Invalid arguments" << std::endl << "--help for more info" << std::endl;
    return (0);
}