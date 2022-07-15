/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowExceptionClass.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:49:34 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/15 11:18:08 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/25/22.
//

#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP
#include <exception>
#include <iostream>

class GradeTooLowExceptionClass :public std::exception {
public:
    const char*    what() const throw();
};


#endif //GRADETOOLOWEXCEPTION_HPP
