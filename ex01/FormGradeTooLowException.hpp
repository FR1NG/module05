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
