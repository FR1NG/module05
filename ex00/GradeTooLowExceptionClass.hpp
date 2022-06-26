//
// Created by Hamza Chakoubi on 6/25/22.
//

#ifndef MODULE05_GRADETOOLOWEXCEPTION_HPP
#define MODULE05_GRADETOOLOWEXCEPTION_HPP
#include <exception>
#include <iostream>

class GradeTooLowExceptionClass : std::exception {
public:
    const char*    what() const throw();
};


#endif //MODULE05_GRADETOOLOWEXCEPTION_HPP
