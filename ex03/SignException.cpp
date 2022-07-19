/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SignException.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:03:27 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/19 17:03:45 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 7/15/22.
//

#include "SignException.hpp"

const char * SignException::what() const throw() {
    return "form already signed";
}

const char * NotSignedException::what() const throw() {
    return "form is not signed";
}


const char *FormNotFound::what() const throw() {
  return "Form name not found";
}
