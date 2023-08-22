#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram {
public:
    Rectangle(const int& a, const int& b);
protected:
    Rectangle(const int& a, const int& b, const std::string& n);
};