#include "Figure_exeption.h"

//Figure_exeption::Figure_exeption(Figure& f) {
//	if (f.get_name() == "�����������")
//		Figure_exeption("����� ����� �� ����� 180");
//}
//
Figure_exeption::Figure_exeption(const std::string& what_arg, const std::string& name)
	: domain_error("������ �������� ������ " + name + ". �������: " + what_arg) {};