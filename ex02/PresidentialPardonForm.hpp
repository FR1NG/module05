/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:24:06 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/16 15:47:52 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 7/15/22.
//

#ifndef MODULE05_PRESIDENTIALPARDONFORM_HPP
#define MODULE05_PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm& form);
    ~PresidentialPardonForm();
    PresidentialPardonForm & operator=(const PresidentialPardonForm &form);

    void execute(const Bureaucrat &executor) const;
};


#endif //MODULE05_PRESIDENTIALPARDONFORM_HPP
