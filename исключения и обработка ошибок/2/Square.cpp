#include "Square.h"

Square::Square(const int a)
        :Rectangle(a, a, "�������") {
    if (get_side_a() != get_side_b())
        throw Figure_exeption("��� ������� �� �����", this->get_name());
};
