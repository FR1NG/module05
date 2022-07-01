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
