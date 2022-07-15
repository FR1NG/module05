//
// Created by Hamza Chakoubi on 7/15/22.
//

#include "SignException.hpp"

const char * SignException::what() const throw() {
    return "form already signed";
}