//
// Created by Hamza Chakoubi on 6/25/22.
//

#ifndef MODULE05_GRADETOOLOWEXCEPTION_HPP
#define MODULE05_GRADETOOLOWEXCEPTION_HPP
#include <exception>
#include <iostream>

class GradeTooLowException : std::exception {
private:
    int grade;
public:
    void    setGrade(int grade);
    std::string    error();
};


#endif //MODULE05_GRADETOOLOWEXCEPTION_HPP
