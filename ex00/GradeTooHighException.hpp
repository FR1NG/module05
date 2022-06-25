//
// Created by Hamza Chakoubi on 6/25/22.
//

#ifndef MODULE05_GRADETOOHIGHEXCEPTION_HPP
#define MODULE05_GRADETOOHIGHEXCEPTION_HPP

#include <iostream>
#include <exception>

class GradeTooHighException : std::exception{
private:
    int grade;
public:
    void    setGrade(int grade);
    std::string    error();
};


#endif //MODULE05_GRADETOOHIGHEXCEPTION_HPP
