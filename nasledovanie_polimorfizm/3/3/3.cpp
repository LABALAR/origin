

#include <iostream>
#include <string>

class Figure {
public:
    int get_sides_count() 
    { 
        return sides_count_; 
    }
    std::string get_name() 
    { 
        return name_;
    }
    Figure() : Figure(0, "Фигура") {};
    virtual bool check() 
    { 
        return sides_count_ ? false : true; 
    };
    virtual void print_info();
    ~Figure() 
    { 
        delete sides_;
        delete angles_; 
    };
protected:
    Figure(const int& s_c, const std::string& n) : sides_count_(s_c), name_(n) 
    {
        sides_ = new int[s_c];
        angles_ = new int[s_c];
    }
    int* sides_;
    int* angles_;
private:
    int sides_count_;
    std::string name_;

};

void Figure::print_info() 
{
    std::cout << name_ << ':' << std::endl;
    std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    std::cout << "Количество сторон: " << sides_count_ << std::endl;
}

class Triangle : public Figure 
{
public:
    Triangle(const int& a, const int& b, const int& c, const int& A, const int& B, const int& C)
        :Triangle(a, b, c, A, B, C, 3, "Треугольник") {};
    int get_side_a() { return sides_[0]; }
    int get_side_b() { return sides_[1]; }
    int get_side_c() { return sides_[2]; }
    int get_angle_a() { return angles_[0]; }
    int get_angle_b() { return angles_[1]; }
    int get_angle_c() { return angles_[2]; }
    bool check() override;
    void print_info() override;
protected:
    virtual void print_sides_();
    virtual void print_angles_();
    Triangle(const int& a, const int& b, const int& c, const int& A, const int& B, const int& C, const int& s_c, const std::string& n)
        : Figure(s_c, n)
    {
        sides_[0] = a;
        sides_[1] = b;
        sides_[2] = c;
        angles_[0] = A;
        angles_[1] = B;
        angles_[2] = C;
    };
private:
};

void Triangle::print_sides_() 
{
    std::cout << "Стороны: ";
    std::cout << " a=" << get_side_a();
    std::cout << " b=" << get_side_b();
    std::cout << " c=" << get_side_c();
}

void Triangle::print_angles_()
{
    std::cout << "Углы: ";
    std::cout << "\t  A=" << get_angle_a();
    std::cout << " B=" << get_angle_b();
    std::cout << " C=" << get_angle_c();
}

bool Triangle::check() 
{
    if (get_sides_count() == 3 && (angles_[0] + angles_[1] + angles_[2]) == 180)
        return true;
    else
        return false;
}

void Triangle::print_info() 
{
    Figure::print_info();
    print_sides_();
    std::cout << std::endl;
    print_angles_();
    std::cout << std::endl;
};

class Right_triangle : public Triangle 
{
public:
    Right_triangle(const int& a, const int& b, const int& c, const int& A, const int& B)
        :Triangle(a, b, c, A, B, 90, 3, "Прямоугольный треугольник") {};
    bool check() override;
};

bool Right_triangle::check() 
{
    if (Triangle::check() && angles_[2] == 90)
        return true;
    else
        return false;
}

class Isosceles_triangle : public Triangle 
{
public:
    Isosceles_triangle(const int& a, const int& b, const int& A, const int& B)
        :Triangle(a, b, a, A, B, A, 3, "Равнобедренный треугольник") {};
    bool check() override;
};

bool Isosceles_triangle::check() 
{
    if (Triangle::check() && sides_[0] == sides_[2] && angles_[0] == angles_[2])
        return true;
    else
        return false;
};

class Equilateral_triangle : public Triangle 
{
public:
    Equilateral_triangle(const int& a)
        : Triangle(a, a, a, 60, 60, 60, 3, "Равносторонний треугольник") {};
    bool check() override;
};

bool Equilateral_triangle::check() 
{
    if (Triangle::check() && sides_[0] == sides_[1] && sides_[1] == sides_[2] && angles_[0] == angles_[1] && angles_[1] == angles_[2])
        return true;
    else
        return false;
};

class Quadrangle : public Triangle 
{
public:
    Quadrangle(const int& a, const int& b, const int& c, const int& d, const int& A, const int& B, const int& C, const int& D)
        : Quadrangle(a, b, c, d, A, B, C, D, 4, "Четырёхугольник") {};
    int get_side_d() 
    { 
        return sides_[3]; 
    }
    int get_angle_d() 
    { 
        return angles_[3]; 
    }
    bool check() override;
protected:
    void print_sides_() override;
    void print_angles_() override;
    Quadrangle(const int& a, const int& b, const int& c, const int& d,
        const int& A, const int& B, const int& C, const int& D, const int& s_c, const std::string& n)
        :Triangle(a, b, c, A, B, C, 4, n) 
    {
        sides_[3] = d;
        angles_[3] = D;
    };
private:
};

bool Quadrangle::check() 
{
    if (get_sides_count() == 4 && (angles_[0] + angles_[1] + angles_[2] + angles_[3]) == 360)
        return true;
    else
        return false;
}

void Quadrangle::print_sides_() 
{
    Triangle::print_sides_();
    std::cout << " d=" << get_side_d();
}

void Quadrangle::print_angles_() 
{
    Triangle::print_angles_();
    std::cout << " D=" << get_angle_d();
}

class Parallelogram : public Quadrangle 
{
public:
    Parallelogram(const int& a, const int& b, const int& A, const int& B)
        :Quadrangle(a, b, a, b, A, B, A, B, 4, "Параллелограмм") {};
    bool check() override;
protected:
    Parallelogram(const int& a, const int& b, const int& A, const int& B, const std::string& n)
        :Quadrangle(a, b, a, b, A, B, A, B, 4, n) {};
};

bool Parallelogram::check() 
{
    if (Quadrangle::check() && sides_[0] == sides_[2] && sides_[1] == sides_[3] && angles_[0] == angles_[2] && angles_[1] == angles_[3])
        return true;
    else
        return false;
};

class Rectangle : public Parallelogram 
{
public:
    Rectangle(const int& a, const int& b)
        :Parallelogram(a, b, 90, 90, "Прямоугольник") {};
    bool check() override;
protected:
    Rectangle(const int& a, const int& b, const std::string& n)
        :Parallelogram(a, b, 90, 90, n) {};
};

bool Rectangle::check() 
{
    if (Parallelogram::check() && angles_[0] == 90)
        return true;
    else
        return false;
}

class Square : public Rectangle 
{
public:
    Square(const int& a)
        :Rectangle(a, a, "Квадрат") {};
    bool check() override;
};

bool Square::check() 
{
    if (Rectangle::check() && sides_[0] == sides_[1])
        return true;
    else
        return false;
}

class Rhombus : public Parallelogram 
{
public:
    Rhombus(const int& a, const int& A, const int& B)
        :Parallelogram(a, a, A, B, "Ромб") {};
    bool check() override;
};

bool Rhombus::check() 
{
    if (Parallelogram::check() && sides_[0] == sides_[1])
        return true;
    else
        return false;
}

void print_info(Figure& f)
{
    f.print_info();
    std::cout << std::endl;
}

int main()
{
    Figure f;
    Triangle t(10, 20, 30, 50, 60, 70);
    Right_triangle rt(10, 20, 30, 50, 60);
    Right_triangle rt2(10, 20, 30, 50, 40);
    Isosceles_triangle it(10, 20, 50, 60);
    Equilateral_triangle et(30);
    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle r(10, 20);
    Square sq(20);
    Parallelogram p(20, 30, 30, 40);
    Rhombus rh(30, 30, 40);
    Rhombus rh2(30, 100, 80);

    setlocale(LC_ALL, "Russian");
    print_info(f);
    print_info(t);
    print_info(rt);
    print_info(rt2);
    print_info(it);
    print_info(et);
    print_info(q);
    print_info(r);
    print_info(sq);
    print_info(p);
    print_info(rh);
    print_info(rh2);
}