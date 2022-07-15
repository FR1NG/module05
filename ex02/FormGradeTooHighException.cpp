/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormGradeTooHighException.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:18:43 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:18:44 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/29/22.
//

#include "FormGradeTooHighException.hpp"

const char *FormGradeTooHighException::what() const throw() {
    return "Form required lower grade, this grade is too high";
}