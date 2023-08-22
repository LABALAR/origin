#include "Right_triangle.h"

Right_triangle::Right_triangle(const int a, const int b, const int c, const int A, const int B)
	:Triangle(a, b, c, A, B, 90, 3, "Прямоугольный треугольник") {
	if (get_angle_c() != 90)
		throw Figure_exeption("угол C не равен 90", this->get_name());
};