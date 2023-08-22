#include "Parallelogram.h"

Parallelogram::Parallelogram(const int& a, const int& b, const int& A, const int& B)
        :Quadrangle(a, b, a, b, A, B, A, B, 4, "ֿאנאככוכמדנאלל") {};

Parallelogram::Parallelogram(const int& a, const int& b, const int& A, const int& B, const std::string& n)
        :Quadrangle(a, b, a, b, A, B, A, B, 4, n) {};
