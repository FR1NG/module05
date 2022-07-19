/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:20:00 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/17 16:20:01 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 7/17/22.
//

#ifndef MODULE05_INTERN_HPP
#define MODULE05_INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Intern {
public:
  Intern();
  Intern(const Intern &intern);
  Intern &operator=(const Intern &intern);
  ~Intern();
  Form *makeForm(const std::string &name, const std::string &target);
};

#endif // MODULE05_INTERN_HPP
