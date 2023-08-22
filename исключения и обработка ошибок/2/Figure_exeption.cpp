#include "Figure_exeption.h"

//Figure_exeption::Figure_exeption(Figure& f) {
//	if (f.get_name() == "Треугольник")
//		Figure_exeption("сумма углов не равна 180");
//}
//
Figure_exeption::Figure_exeption(const std::string& what_arg, const std::string& name)
	: domain_error("Ошибка создания фигуры " + name + ". Причина: " + what_arg) {};