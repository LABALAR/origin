
#pragma once
#include "Rectangle.h"

// ������� (��� ������� �����, ��� ���� ����� 90)
class Square : public Rectangle
{
public:
    Square(int abcd);

protected:
    bool check() override;
};