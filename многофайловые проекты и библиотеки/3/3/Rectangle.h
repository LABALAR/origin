#pragma once
#include "Quadrangle.h"

// ������������� (������� a,c � b,d ������� �����, ��� ���� ����� 90)
class Rectangle : public Quadrangle
{
public:
    Rectangle(int ac, int bd);

protected:
    bool check() override;
};