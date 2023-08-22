#include "Square.h"

Square::Square(const int a)
        :Rectangle(a, a, " вадрат") {
    if (get_side_a() != get_side_b())
        throw Figure_exeption("все стороны не равны", this->get_name());
};
