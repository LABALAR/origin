#pragma once
#include "Triangle.h"

// �������������� �����������(��� ������� �����, ��� ���� ����� 60)
class Equilateral_Triangle : public Triangle
{
public:
    Equilateral_Triangle(int abc);

private:
    bool check() override;
};