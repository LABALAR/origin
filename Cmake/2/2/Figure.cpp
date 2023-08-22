#include "Figure.h"

int Figure::get_sides_count() { return sides_count_; }
std::string Figure::get_name() { return name_; }
Figure::Figure() : Figure(0, "Фигура") {};
Figure::Figure(const int& s_c, const std::string& n) : sides_count_(s_c), name_(n) {};
