#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(const int a, const int b, const int A, const int B)
	:Triangle(a, b, a, A, B, A, 3, "�������������� �����������") {
		if (get_side_a() != get_angle_b())
			throw Figure_exeption("������� a �� ����� ������� b", this->get_name());
		if (get_angle_a() == get_angle_b())
			throw Figure_exeption("������� a �� ����� ������� b", this->get_name());
};

