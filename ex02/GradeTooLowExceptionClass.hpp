/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowExceptionClass.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:49:34 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/28 16:49:35 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/25/22.
//

#ifndef MODULE05_GRADETOOLOWEXCEPTION_HPP
#define MODULE05_GRADETOOLOWEXCEPTION_HPP
#include <exception>
#include <iostream>

class GradeTooLowExceptionClass :public std::exception {
public:
    const char*    what() const throw();
};


#endif //MODULE05_GRADETOOLOWEXCEPTION_HPP
