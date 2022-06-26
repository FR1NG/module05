//
// Created by Hamza Chakoubi on 6/25/22.
//

#include "GradeTooLowExceptionClass.hpp"

const char* GradeTooLowExceptionClass::what() const throw(){
    return "The grade that you trying to give to the bureaucrat is too low";
}