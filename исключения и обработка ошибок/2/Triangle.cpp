#include "Triangle.h"
#include <iostream>

Triangle::Triangle(const int a, const int b, const int c, const int A, const int B, const int C) :
        Triangle(a, b, c, A, B, C, 3, "Треугольник") {};

int Triangle::get_side_a() { return side_a_; }

int Triangle::get_side_b() { return side_b_; }

int Triangle::get_side_c() { return side_c_; }

int Triangle::get_angle_a() { return angle_a_; }

int Triangle::get_angle_b() { return angle_b_; }

int Triangle::get_angle_c() { return angle_c_; }

Triangle::Triangle(const int a, const int b, const int c, const int A, const int B, const int C, const int s_c, const std::string& n)
        : Figure(s_c, n), side_a_(a), side_b_(b), side_c_(c), angle_a_(A), angle_b_(B), angle_c_(C) {
    if (get_sides_count() == 3 && (angle_a_ + angle_b_ + angle_c_) != 180)
        throw Figure_exeption("сумма углов не равна 180", this->get_name());
};

void Triangle::print_sides_() {
    std::cout << get_side_a();
    std::cout << ", " << get_side_b();
    std::cout << ", " << get_side_c();
}

void Triangle::print_angles_() {
    std::cout << get_angle_a();
    std::cout << ", " << get_angle_b();
    std::cout << ", " << get_angle_c();
}