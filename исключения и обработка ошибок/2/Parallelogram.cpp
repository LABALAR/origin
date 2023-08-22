#include "Parallelogram.h"

Parallelogram::Parallelogram(const int a, const int b, const int A, const int B)
        :Parallelogram(a, b, A, B, "Параллелограмм") {};

Parallelogram::Parallelogram(const int a, const int b, const int A, const int B, const std::string& n)
        :Quadrangle(a, b, a, b, A, B, A, B, 4, n) {
    if (get_side_a() != get_side_c() && get_side_b() != get_side_d())
        throw Figure_exeption("стороны попарно не равны", this->get_name());
    if (get_angle_a() != get_angle_c() && get_angle_b() != get_angle_d())
        throw Figure_exeption("углы попарно не равны", this->get_name());
};
