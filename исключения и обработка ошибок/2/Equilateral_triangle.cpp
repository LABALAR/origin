#include "Equilateral_triangle.h"


Equilateral_triangle::Equilateral_triangle(const int a)
	:Triangle(a, a, a, 60, 60, 60, 3, "�������������� �����������") {
	if (get_side_a() != get_side_b() && get_side_b() != get_side_c())
		throw Figure_exeption("��� ������� �� �����", this->get_name());
	if (get_angle_a() != get_angle_b() && get_angle_b() != get_angle_c())
		throw Figure_exeption("��� ���� �� �����", this->get_name());

};
