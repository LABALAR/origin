#include "Isosceles_Triangle.h"

// �������������� ����������� (������� a � c �����, ���� A � C �����)
Isosceles_Triangle::Isosceles_Triangle(int ac, int b, int AC, int B) : Triangle(ac, b, ac, AC, B, AC)
{
    set_name("�������������� �����������");
}

bool Isosceles_Triangle::check()
{
    if (!Triangle::check()) return false;
    // ���������, ��������� ��������� ������ a � �, ��������� ����� A � C �� ����, ��� ��� ��� �������� � ������������ Triangle �������
    return true;
}