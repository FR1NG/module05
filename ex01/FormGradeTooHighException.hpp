/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormGradeTooHighException.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:16:28 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:18:08 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/29/22.
//

#ifndef FORMGRADETOOHIGHEXCEPTION_HPP
#define FORMGRADETOOHIGHEXCEPTION_HPP

#include <exception>
#include <iostream>

class FormGradeTooHighException : public std::exception{
public:
    const char* what() const throw();
};


#endif //FORMGRADETOOHIGHEXCEPTION_HPP
