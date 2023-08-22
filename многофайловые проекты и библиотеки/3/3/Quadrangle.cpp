#include "Quadrangle.h"

// �������������� (������� � ���� ������������, ���������� ������ = 4, ����� ����� = 360)
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure(quad)
{
    set_sides_abcd(a, b, c, d);
    set_corners_ABCD(A, B, C, D);
    set_corners_count(quad);
    set_sides_count(quad);
    set_name("���������������");
}

void Quadrangle::print_info()
{
    print_name();
    print_check();
    print_sides_count();
    print_sides();
    print_corners();
    std::cout << std::endl;
}

bool Quadrangle::check()
{
    const int* s = this->get_sides();
    int s_count = this->get_sides_count();
    for (int i = 0; i < s_count; ++i)
    {
        if (*(s + i) <= 0) return false; // ���������, ��� ����� ������ ������ ����.
    }
    const int* c = this->get_corners();
    int c_count = this->get_sides_count();
    int corners_sum = 0;
    for (int i = 0; i < c_count; ++i)
    {
        corners_sum += *(c + i);
    }
    if (360 != corners_sum) return false; // ���������, ��� ����� ����� ������ ����� 360.
    return true;
}

void Quadrangle::print_sides()
{
    std::cout << "�������: ";
    for (int i = 0; i < this->get_sides_count(); ++i)
        std::cout << sidesName[i] << "=" << *(this->get_sides() + i) << " ";
    std::cout << std::endl;
}

void Quadrangle::print_corners()
{
    std::cout << "����: ";
    for (int i = 0; i < this->get_corners_count(); ++i)
        std::cout << cornersName[i] << "=" << *(this->get_corners() + i) << " ";
    std::cout << std::endl;

}

const int* Quadrangle::get_sides()
{
    return this->side_abcd;
}

const int* Quadrangle::get_corners()
{
    return this->corner_ABCD;
}

void Quadrangle::set_sides_abcd(int a, int b, int c, int d)
{
    this->side_abcd[0] = a;
    this->side_abcd[1] = b;
    this->side_abcd[2] = c;
    this->side_abcd[3] = d;
}

void Quadrangle::set_corners_ABCD(int A, int B, int C, int D)
{
    this->corner_ABCD[0] = A;
    this->corner_ABCD[1] = B;
    this->corner_ABCD[2] = C;
    this->corner_ABCD[3] = D;
}