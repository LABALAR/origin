#pragma once
#include "Triangle.h"

// �������������� ����������� (������� a � c �����, ���� A � C �����)
class Isosceles_Triangle : public Triangle
{
public:
    Isosceles_Triangle(int ac, int b, int AC, int B);

private:
    bool check() override;
};