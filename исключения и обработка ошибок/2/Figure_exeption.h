#pragma once
#include <stdexcept>
#include <string>
#include <iostream>
#include "Figure.h"

class Figure_exeption :
    public std::domain_error
{
public:
    Figure_exeption(const std::string& what_arg, const std::string& name);
};

