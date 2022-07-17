/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormGradeTooLowException.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:18:53 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:18:54 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/29/22.
//

#include "FormGradeTooLowException.hpp"

const char *FormGradeTooLowException::what() const throw() {
    return "Form require higher grade, this grade is too low";
}