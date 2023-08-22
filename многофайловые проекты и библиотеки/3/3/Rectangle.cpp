#include "Rectangle.h"

// ������������� (������� a,c � b,d ������� �����, ��� ���� ����� 90)
Rectangle::Rectangle(int ac, int bd) : Quadrangle(ac, bd, ac, bd, 90, 90, 90, 90)
{
    set_name("�������������");
}

bool Rectangle::check()
{
    if (!Quadrangle::check()) return false;
    // ������������ ��������� ��������������� ������ �������� � ������������, � �������� ��� �������������.
    /*
        ���������, ��������� ���� �� ����, ��� ��� ��� �������� � ������������ Quadrangle ������ 90
        const int* c = this->get_corners();
        int c_count = this->get_sides_count();
        for (int i = 0; i < c_count; ++i)
            {
            if (90 != *(c + i)) return false; // ���������, ��� ���� ����� 90
            }
    */
    return true;
}