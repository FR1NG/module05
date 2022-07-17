/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:19:57 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/17 16:19:58 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 7/17/22.
//

#include "Intern.hpp"

int indexOf(const std::string &names[], const std::string &name)
{
    for (int i = 0, i < names.length(), i++)
    {
        if (names[i] == name)
            return(i);
    }
    return -1;
}

Intern::Intern() {

}

Intern::Intern(const Intern &intern) {

}

Intern& Intern::operator=(const Intern &intern) {
    return (*this);
}

Intern::~Intern() {

}

int Intern::makeForm(const std::string &name, const std::string &target)
{
    std::string names[] = { "presidential pardon", "robotomy request", "shrubbery creation"};
    Form* forms [3];
    forms[0] = new PresidentialPardonForm(target);
    forms[1] = new RobotomyRequestForm(target);
    forms[2] = new ShrubberyCreationForm(target);
    int index = idexOf(names, name);
    if (index != -1)
    {
        for (int i = 0; i < 3; i++){
            if (i != index)
                delete forms[i];
        }
        return forms[index];
    }
}