#pragma once
#include "Parallelogram.h"

// ���� (��� ������� �����, ���� A,C � B,D ������� �����)
class Rhombus : public Parallelogram
{
public:
    Rhombus(int abcd, int AC, int BD);

protected:
    bool check() override;
};