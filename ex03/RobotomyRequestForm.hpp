/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:24:18 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:24:19 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 7/15/22.
//

#ifndef MODULE05_ROBOTOMYREQUESTFORM_HPP
#define MODULE05_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <time.h>

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &form);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm& form);

    std::string getTarget() const;
    void    setTarget(const std::string target);
    void execute(const Bureaucrat &executor) const;
private:
    std::string target;
    void    makeDrillibgNoise() const;
};


#endif //MODULE05_ROBOTOMYREQUESTFORM_HPP
