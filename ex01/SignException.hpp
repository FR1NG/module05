//
// Created by Hamza Chakoubi on 7/15/22.
//

#ifndef SIGNEXCEPTION_HPP
#define SIGNEXCEPTION_HPP

#include <iostream>
#include <exception>

class SignException :public std::exception{

public:
    const char*   what() const throw();
};

#endif //SIGNEXCEPTION_HPP
