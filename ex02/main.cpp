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

void    notify(const std::string notification, int level)
{
    switch (level) {
        case 1:
            std::cerr << "\x1B[32m" << notification << "\033[0m" << std::endl;
        break;
        case 2:
            std::cerr << "\x1B[34m" << notification << "\033[0m" << std::endl;
        break;
        case 3:
            std::cerr << "\x1B[33m" << notification << "\033[0m" << std::endl;
        break;
        case 4:
            std::cerr << "\x1B[31m" << notification << "\033[0m" << std::endl;
        break;
        default:
            std::cerr << notification << std::endl;
    }
}

void testRobotomy(const std::string bName, int bGrade, const std::string fName)
{
    notify("--------------------------------------------", 2);
    notify("testing executeForm with form not signed", 2);
    notify("--------------------------------------------", 2);
    try {
        Bureaucrat b(bGrade, bName);
        RobotomyRequestForm f(fName);

        try
        {
                b.executeForm(f);
        }
        catch(const std::exception& e)
        {
            notify(e.what(), 4);
        }

    } catch (std::exception &e) {
        notify(e.what(), 4);
    }

    notify("--------------------------------------------", 2);
    notify("testing signForm and executeForm with form signed", 2);
    notify("--------------------------------------------", 2);
    try {
        Bureaucrat b(bGrade, bName);
        RobotomyRequestForm f(fName);

        try
        {
            b.signForm(f);
            b.executeForm(f);
        }
        catch(const std::exception& e)
        {
            notify(e.what(), 4);
        }

    } catch (std::exception &e) {
        notify(e.what(), 4);
    }

    notify("--------------------------------------------", 2);
    notify("testing beSigned and execute with form signed", 2);
    notify("--------------------------------------------", 2);
    try {
        Bureaucrat b(bGrade, bName);
        RobotomyRequestForm f(fName);

        try
        {
            f.beSigned(b);
            f.execute(b);
        }
        catch(const std::exception& e)
        {
            notify(e.what(), 4);
        }

    } catch (std::exception &e) {
        notify(e.what(), 4);
    }
}

void testShrubbery(const std::string bName, int bGrade, const std::string fName)
{

    notify("--------------------------------------------", 2);
    notify("testing executeForm with form not signed", 2);
    notify("--------------------------------------------", 2);
    try {
        Bureaucrat b(bGrade, bName);
        ShrubberyCreationForm f(fName);

        try
        {
            b.executeForm(f);
        }
        catch(const std::exception& e)
        {
            notify(e.what(), 4);
        }

    } catch (std::exception &e) {
        notify(e.what(), 4);
    }

    notify("--------------------------------------------", 2);
    notify("testing executeForm with form signed", 2);
    notify("--------------------------------------------", 2);
    try {
        Bureaucrat b(bGrade, bName);
        ShrubberyCreationForm f(fName);

        try
        {
            b.signForm(f);
            b.executeForm(f);
        }
        catch(const std::exception& e)
        {
            notify(e.what(), 4);
        }

    } catch (std::exception &e) {
        notify(e.what(), 4);
    }

    notify("--------------------------------------------", 2);
    notify("testing beSigned and execute with form signed", 2);
    notify("--------------------------------------------", 2);
    try {
        Bureaucrat b(bGrade, bName);
        ShrubberyCreationForm f(fName);

        try
        {
            f.beSigned(b);
            f.execute(b);
        }
        catch(const std::exception& e)
        {
            notify(e.what(), 4);
        }

    } catch (std::exception &e) {
        notify(e.what(), 4);
    }
}

void testPresidetial(const std::string bName, int bGrade, const std::string fName)
{
    notify("--------------------------------------------", 2);
    notify("testing executeForm with form not signed", 2);
    notify("--------------------------------------------", 2);
    try {
        Bureaucrat b(bGrade, bName);
        PresidentialPardonForm f(fName);

        try
        {
            b.executeForm(f);
        }
        catch(const std::exception& e)
        {
            notify(e.what(), 4);
        }

    } catch (std::exception &e) {
        notify(e.what(), 4);
    }

    notify("--------------------------------------------", 2);
    notify("testing executeForm with form signed", 2);
    notify("--------------------------------------------", 2);
    try {
        Bureaucrat b(bGrade, bName);
        PresidentialPardonForm f(fName);

        try
        {
            b.signForm(f);
            b.executeForm(f);
        }
        catch(const std::exception& e)
        {
            notify(e.what(), 4);
        }

    } catch (std::exception &e) {
        notify(e.what(), 4);
    }

    notify("--------------------------------------------", 2);
    notify("testing beSigned and execute with form signed", 2);
    notify("--------------------------------------------", 2);
    try {
        Bureaucrat b(bGrade, bName);
        PresidentialPardonForm f(fName);

        try
        {
            f.beSigned(b);
            f.execute(b);
        }
        catch(const std::exception& e)
        {
            notify(e.what(), 4);
        }

    } catch (std::exception &e) {
        notify(e.what(), 4);
    }
}

int help(int c ,char **v)
{
    if (c != 2)
        return (0);
    std::string  arg(v[1]);
    if (arg == "--help" || arg == "-h")
    {
        std::cout << "because there are too many test cases, and to make testing easy" << std::endl;
        std::cout << "./program <-flag> <bureaucrat_name> <grade> <form_name>" << std::endl;
        std::cout << "-S : to test ShrubberyCreationForm class" << std::endl;
        std::cout << "-R : to test RobotomyRequestForm class" << std::endl;
        std::cout << "-P : to test PresidentialPardonForm class" << std::endl;
        std::cout << "-a : to test all classes" << std::endl;
    }
    else
        std::cerr << "\x1B[31m" <<  "Invalid arguments" << std::endl << "--help or -h for more info"  << "\033[0m" << std::endl;
    return (1);
}

int main(int c, char **v)
{

    help(c, v);
    if(c == 5)
    {
        std::string arg(v[1]);
        if (arg == "-S")
            testShrubbery(v[2], std::stoi(v[3]), v[4]);
        else if (arg == "-R")
            testRobotomy(v[2], std::stoi(v[3]), v[4]);
        else if (arg == "-P")
            testPresidetial(v[2], std::stoi(v[3]), v[4]);
        else if (arg == "-a")
        {
            testShrubbery(v[2], std::stoi(v[3]), v[4]);
            testRobotomy(v[2], std::stoi(v[3]), v[4]);
            testPresidetial(v[2], std::stoi(v[3]), v[4]);
        }
        else
            std::cerr << "Invalid arguments" << std::endl << "--help or -h for more info" << std::endl;
    }
    else if (c != 5 && c != 2)
        std::cerr << "Invalid arguments" << std::endl << "--help or -h for more info" << std::endl;
    return (0);
}