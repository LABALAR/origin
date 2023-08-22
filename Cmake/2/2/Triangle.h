#pragma once
#include "Figure.h"

class Triangle : public Figure {
public:
    Triangle(const int& a, const int& b, const int& c, const int& A, const int& B, const int& C);
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_angle_a();
    int get_angle_b();
    int get_angle_c();
    void print_sides_() override;
    void print_angles_() override;
protected:
    Triangle(const int& a, const int& b, const int& c, const int& A, const int& B, const int& C, const int& s_c, const std::string& n);
private:
    int side_a_;
    int side_b_;
    int side_c_;
    int angle_a_;
    int angle_b_;
    int angle_c_;
};