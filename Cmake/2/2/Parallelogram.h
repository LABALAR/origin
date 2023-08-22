#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle {
public:
    Parallelogram(const int& a, const int& b, const int& A, const int& B);
protected:
    Parallelogram(const int& a, const int& b, const int& A, const int& B, const std::string& n);
};
