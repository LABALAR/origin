#include "Square.h"

// ������� (��� ������� �����, ��� ���� ����� 90)
Square::Square(int abcd) : Rectangle(abcd, abcd)
{
    set_name("�������");
}

bool Square::check()
{
    if (!Rectangle::check()) return false;
    return true;
}