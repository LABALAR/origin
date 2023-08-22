#include "Rhombus.h"

// ���� (��� ������� �����, ���� A,C � B,D ������� �����)
Rhombus::Rhombus(int abcd, int AC, int BD) : Parallelogram(abcd, abcd, AC, BD)
{
    set_name("����");
}

bool Rhombus::check()
{
    if (!Parallelogram::check()) return false;
    /*
       ���������, ��� �������� ���� �� ����� 360 / 4 = 90, ����� ��� �������(���� ������� ��� ������� ������ �����)
       const int* c = this->get_corners();
       if ((*c == *(c+1))) return false;
    */
    return true;
}