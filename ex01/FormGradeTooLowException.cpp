//
// Created by Hamza Chakoubi on 6/29/22.
//

#include "FormGradeTooLowException.hpp"

const char *FormGradeTooLowException::what() const throw() {
    return "The grade that you trying to assign to this form is too low";
}