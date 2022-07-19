/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SignException.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:04:09 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/19 17:04:12 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 7/15/22.
//

#ifndef SIGNEXCEPTION_HPP
#define SIGNEXCEPTION_HPP

#include <exception>
#include <iostream>

class SignException : public std::exception {

public:
  const char *what() const throw();
};

class NotSignedException : public std::exception {
public:
  const char *what() const throw();
};

class FormNotFound : public std::exception {
public:
  const char *what() const throw();
};
#endif // SIGNEXCEPTION_HPP
