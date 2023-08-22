#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle(const int& a, const int& b, const int& c, const int& d, const int& A, const int& B, const int& C, const int& D)
        : Quadrangle(a, b, c, d, A, B, C, D, 4, "Четырёхугольник") {};

int Quadrangle::get_side_d() { return side_d_; }

int Quadrangle::get_angle_d() { return angle_d_; }

Quadrangle::Quadrangle(const int& a, const int& b, const int& c, const int& d,
        const int& A, const int& B, const int& C, const int& D, const int& s_c, const std::string& n)
        :Triangle(a, b, c, A, B, C, 4, n), side_d_(d), angle_d_(D) {};

void Quadrangle::print_sides_() {
    Triangle::print_sides_();
    std::cout << " d=" << get_side_d();
}

void Quadrangle::print_angles_() {
    Triangle::print_angles_();
    std::cout << " D=" << get_angle_d();
}
