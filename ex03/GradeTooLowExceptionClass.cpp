/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowExceptionClass.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:49:29 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/28 16:49:30 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/25/22.
//

#include "GradeTooLowExceptionClass.hpp"

const char* GradeTooLowExceptionClass::what() const throw(){
    return "The grade that you trying to give to the bureaucrat is too low";
}