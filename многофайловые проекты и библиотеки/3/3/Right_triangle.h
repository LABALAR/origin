#pragma once
#include "Triangle.h"

// ������������� ����������� (���� C ������ ����� 90)
class Right_Triangle : public Triangle
{
public:
    Right_Triangle(int a, int b, int c, int A, int B);

private:
    bool check() override;
};