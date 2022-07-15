//
// Created by Hamza Chakoubi on 6/29/22.
//

#include "FormGradeTooLowException.hpp"

const char *FormGradeTooLowException::what() const throw() {
    return "Form grade is too low";
}