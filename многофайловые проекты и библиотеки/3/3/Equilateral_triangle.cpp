#include "Equilateral_Triangle.h"

// �������������� �����������(��� ������� �����, ��� ���� ����� 60)
Equilateral_Triangle::Equilateral_Triangle(int abc) : Triangle(abc, abc, abc, 60, 60, 60)
{
    set_name("�������������� �����������");
}

bool Equilateral_Triangle::check()
{
    if (!Triangle::check()) return false;
    // ���������, ��������� ��������� ������ � ��������� ����� �� ����, ��� ��� ��� �������� � ������������ Triangle �������
    return true;
}