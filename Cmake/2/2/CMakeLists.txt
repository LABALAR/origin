cmake_minimum_required(VERSION 3.22.0)
project(triangle_and_square)
set(LIB Figure.cpp
		Triangle.cpp
		Equilateral_triangle.cpp
		Isosceles_triangle.cpp
		Rectangle.cpp
		Right_triangle.cpp
		Square.cpp
		Parallelogram.cpp
		Quadrangle.cpp
		Rhombus.cpp)
add_library(Figure ${LIB})
add_executable(triangle_and_square 2.cpp)
target_link_libraries(triangle_and_square Figure)
