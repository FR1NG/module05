/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormGradeTooHighException.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:18:50 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:18:51 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/29/22.
//

#ifndef MODULE05_FORMGRADETOOHIGHEXCEPTION_HPP
#define MODULE05_FORMGRADETOOHIGHEXCEPTION_HPP

#include <exception>
#include <iostream>

class FormGradeTooHighException : public std::exception{
public:
    const char* what() const throw();
};


#endif //MODULE05_FORMGRADETOOHIGHEXCEPTION_HPP
