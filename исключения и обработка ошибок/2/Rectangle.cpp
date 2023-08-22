#include "Rectangle.h"

Rectangle::Rectangle(const int a, const int b)
        :Rectangle(a, 90, "�������������") {};

Rectangle::Rectangle(const int a, const int b, const std::string& n)
        :Parallelogram(a, b, 90, 90, n) {
    if (get_angle_a() != get_angle_b() && get_angle_a() != 90)
        throw Figure_exeption("���� �� ����� 90", this->get_name());
};  