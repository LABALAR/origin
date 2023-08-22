#include <iostream>
#include <string>
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"

void print_info(Figure& f) {
    std::cout << f.get_name() << ":" << std::endl;
    std::cout << "Стороны :";
    f.print_sides_();
    std::cout << std::endl << "Углы:";
    f.print_angles_();
    std::cout << std::endl;
}

int main()
{
    Triangle t(10, 20, 30, 50, 60, 70);
    Right_triangle rt(10, 20, 30, 50, 60);
    Isosceles_triangle it(10, 20, 50, 60);
    Equilateral_triangle et(30);
    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle r(10, 20);
    Square sq(20);
    Parallelogram p(20, 30, 30, 40);
    Rhombus rh(30, 30, 40);

    setlocale(LC_ALL, "Russian");
    print_info(t);
    print_info(rt);
    print_info(it);
    print_info(et);
    print_info(q);
    print_info(r);
    print_info(sq);
    print_info(p);
    print_info(rh);
}