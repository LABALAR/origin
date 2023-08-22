#include "Rhombus.h"

Rhombus::Rhombus(const int a, const int A, const int B)
        :Parallelogram(a, a, A, B, "Ромб") {
    if (get_side_a() != get_side_b())
        throw Figure_exeption("все стороны не равны", this->get_name());
};