/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighExceptionClass.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:48:26 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/28 16:48:27 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/25/22.
//

#include "GradeTooHighExceptionClass.hpp"

const char* GradeTooHighExceptionClass::what() const throw() {

    return "The grade that you trying to give to the bureaucrat is too HIGH";;
}