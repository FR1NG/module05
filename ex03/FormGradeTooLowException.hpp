/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormGradeTooLowException.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:18:56 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:18:57 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/29/22.
//

#ifndef MODULE05_FORMGRADETOOLOWEXCEPTION_HPP
#define MODULE05_FORMGRADETOOLOWEXCEPTION_HPP

#include <exception>
#include <iostream>

class FormGradeTooLowException : public std::exception {
public:
    const char* what() const throw();
};


#endif //MODULE05_FORMGRADETOOLOWEXCEPTION_HPP
