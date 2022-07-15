//
// Created by Hamza Chakoubi on 6/29/22.
//

#include "FormGradeTooHighException.hpp"

const char *FormGradeTooHighException::what() const throw() {
    return "Form grade is too high";
}