#include "Rectangle.h"

Rectangle::Rectangle(const int& a, const int& b)
        :Parallelogram(a, b, 90, 90, "Прямоугольник") {};

Rectangle::Rectangle(const int& a, const int& b, const std::string& n)
        :Parallelogram(a, b, 90, 90, n) {};