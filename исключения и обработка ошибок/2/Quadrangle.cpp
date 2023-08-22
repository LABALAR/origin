#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle(const int a, const int b, const int c, const int d, const int A, const int B, const int C, const int D)
        : Quadrangle(a, b, c, d, A, B, C, D, 4, "Четырёхугольник") {};

int Quadrangle::get_side_d() { return side_d_; }

int Quadrangle::get_angle_d() { return angle_d_; }

Quadrangle::Quadrangle(const int a, const int b, const int c, const int d,
        const int A, const int B, const int C, const int D, const int s_c, const std::string& n)
        :Triangle(a, b, c, A, B, C, 4, n), side_d_(d), angle_d_(D) {
    if (get_sides_count() == 4 && get_angle_a() + get_angle_b() + get_angle_c() + get_angle_d() != 360)
        throw Figure_exeption("сумма углов не равна 360", this->get_name());
};

void Quadrangle::print_sides_() {
    Triangle::print_sides_();
    std::cout << ", " << get_side_d();
}

void Quadrangle::print_angles_() {
    Triangle::print_angles_();
    std::cout << ", " << get_angle_d();
}
