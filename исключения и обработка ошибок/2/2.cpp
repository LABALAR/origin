

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
#include "Figure_exeption.h"

void print_info(Figure& f) {
    std::cout << f.get_name() << " (" ;
    std::cout << "cтороны : ";
    f.print_sides_();
    std::cout << "; углы: ";
    f.print_angles_();
    std::cout << ") создан" << std::endl;
}

int main()
{
    Triangle* t = nullptr;
    Right_triangle* rt = nullptr;
    Isosceles_triangle* it = nullptr;
    Equilateral_triangle* et = nullptr;
    Quadrangle* q = nullptr;
    Rectangle* r = nullptr;
    Square* sq = nullptr;
    Parallelogram* p = nullptr;
    Rhombus* rh = nullptr;

    setlocale(LC_ALL, "Russian");
    //-----------Треугольник-------------
    try {
        t = new Triangle(10, 20, 30, 50, 60, 70);
        print_info(*t);
    }
    catch (const Figure_exeption& ex) {
        std::cout << ex.what() << std::endl;
    };
    //-----------Прямоугольный треугольник-------------
    try {
        rt = new Right_triangle(10, 20, 30, 50, 60);
        print_info(*rt);
    }
    catch (const Figure_exeption& ex) {
        std::cout << ex.what() << std::endl;
    };
    //-----------Равнобедренный треугольник-------------
    try {
        it = new Isosceles_triangle(10, 20, 50, 60);
        print_info(*it);
    }
    catch (const Figure_exeption& ex) {
        std::cout << ex.what() << std::endl;
    };
    //-----------Равносторонний треугольник-------------
    try {
        et = new Equilateral_triangle(30);
        print_info(*et);
    }
    catch (const Figure_exeption& ex) {
        std::cout << ex.what() << std::endl;
    };
    //-----------Четырёхугольник-------------
    try {
        q = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
        print_info(*q);
    }
    catch (const Figure_exeption& ex) {
        std::cout << ex.what() << std::endl;
    };
    //-----------Прямоугольник-------------
    try {
        r = new Rectangle(10, 20);
        print_info(*r);
    }
    catch (const Figure_exeption& ex) {
        std::cout << ex.what() << std::endl;
    };
    //-----------Квадрат-------------
    try {
        sq = new Square(20);
        print_info(*sq);
    }
    catch (const Figure_exeption& ex) {
        std::cout << ex.what() << std::endl;
    };
    //-----------Параллелограмм-------------
    try {
        p = new Parallelogram(20, 30, 30, 40);
        print_info(*p);
    }
    catch (const Figure_exeption& ex) {
        std::cout << ex.what() << std::endl;
    };
    //-----------Ромб-------------
    try {
        rh = new Rhombus(30, 80, 100);
        print_info(*rh);
    }
    catch (const Figure_exeption& ex) {
        std::cout << ex.what() << std::endl;
    };

    if (t != nullptr)
        delete t;
    if (rt != nullptr)
        delete rt;
    if (it != nullptr)
        delete it;
    if (et != nullptr)
        delete et;
    if (q != nullptr)
        delete q;
    if (r != nullptr)
        delete r;
    if (sq != nullptr)
        delete sq;
    if (p != nullptr)
        delete p;
    if (rh != nullptr)
        delete rh;
}