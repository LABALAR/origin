#include "Parallelogram.h"

// �������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����)
Parallelogram::Parallelogram(int ac, int bd, int AC, int BD) : Quadrangle(ac, bd, ac, bd, AC, BD, AC, BD)
{
    set_name("��������������");
}

bool Parallelogram::check()
{
    if (!Quadrangle::check()) return false;
    // ������������ ��������� ��������������� ������ �������� � ������������, � �������� ��� �������������.
    // ������������ ��������� ��������������� ����� �������� � ������������, � �������� ��� �������������.
    const int* c = this->get_corners();
    if (*c == *(c + 1)) return false; // ���������, ��� ���� �� �����, ����� �������������/�������.
    return true;
}