//
// Created by Hamza Chakoubi on 6/29/22.
//

#include "FormGradeTooHighException.hpp"

const char *FormGradeTooHighException::what() const throw() {
    return "The grade you trying to assign to this form is too high";
}