#pragma once
#include "Quadrangle.h"

// �������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����)
class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int ac, int bd, int AC, int BD);

protected:
    bool check() override;
};