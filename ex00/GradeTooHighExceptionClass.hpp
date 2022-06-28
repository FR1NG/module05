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
