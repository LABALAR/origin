#pragma once
#include <string>

class Figure {
public:
    int get_sides_count();
    std::string get_name();
    Figure();
    virtual void print_sides_() = 0;
    virtual void print_angles_() = 0;
protected:
    Figure(const int& s_c, const std::string& n);
private:
    int sides_count_;
    std::string name_;
};
