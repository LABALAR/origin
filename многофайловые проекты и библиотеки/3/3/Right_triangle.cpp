#include "Right_Triangle.h"

// ������������� ����������� (���� C ������ ����� 90)
Right_Triangle::Right_Triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
{
    set_name("������������� �����������");
}

bool Right_Triangle::check()
{
    if (!Triangle::check()) return false;
    // ���������, ��������� ���� � �� ����, ��� ��� ��� �������� � ������������ Triangle ������ 90
    return true;
}