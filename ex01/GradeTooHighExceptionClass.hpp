/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighExceptionClass.hpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:48:59 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/28 16:49:00 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 6/25/22.
//

#ifndef MODULE05_GRADETOOHIGHEXCEPTION_HPP
#define MODULE05_GRADETOOHIGHEXCEPTION_HPP

#include <iostream>
#include <exception>

class GradeTooHighExceptionClass :public std::exception{

public:
    const char*   what() const throw();
};


#endif //MODULE05_GRADETOOHIGHEXCEPTION_HPP
