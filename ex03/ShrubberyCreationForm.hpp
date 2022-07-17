/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:24:24 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:24:25 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 7/15/22.
//

#ifndef MODULE05_SHRUBBERYCREATIONFORM_HPP
#define MODULE05_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &form);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &form);
    ~ShrubberyCreationForm();

    std::string getTarget() const;
    void        setTarget(const std::string &target);
    void execute(const Bureaucrat &executor) const;
private:
    std::string target;
    void    drowTrees(std::ofstream &file) const;
};


#endif //MODULE05_SHRUBBERYCREATIONFORM_HPP
