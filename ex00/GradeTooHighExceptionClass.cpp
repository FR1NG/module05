//
// Created by Hamza Chakoubi on 6/25/22.
//

#include "GradeTooHighExceptionClass.hpp"

const char* GradeTooHighExceptionClass::what() const throw() {

    return "The grade that you trying to give to the bureaucrat is too HIGH";;
}