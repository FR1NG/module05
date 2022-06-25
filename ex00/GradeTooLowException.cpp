//
// Created by Hamza Chakoubi on 6/25/22.
//

#include "GradeTooLowException.hpp"

void GradeTooLowException::setGrade(int grade) {
    this->grade = grade;
}

std::string GradeTooLowException::error() {
    std::string message;
    message = "The grade " + std::to_string() + "that you trying to give to the bureaucrat is too low";
    return message;
}