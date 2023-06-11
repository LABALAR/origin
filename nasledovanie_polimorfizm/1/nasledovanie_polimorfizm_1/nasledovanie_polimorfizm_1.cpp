#include <iostream>

using namespace std;

class Figure
{
protected:
	string name;
	int sides_count;
public:
	Figure()
	{
		this->sides_count = 0;
		this->name = "figure";
	}

	void get_sides_count()
	{
		cout << name << " : " << sides_count << endl;
	};
};

class Triangle : public Figure
{
public:
	Triangle() 
	{
		this-> sides_count = 3;
		this->name = "triangle";
	} 
};

class Quadrangle : public Figure
{
public:
	Quadrangle()
	{
		this-> sides_count = 4;
		this->name = "quadrangle";
	}
};

int main()
{
	Figure figure;
	figure.get_sides_count();

	Triangle triangle;
	triangle.get_sides_count();

	Quadrangle quadrangle;
	quadrangle.get_sides_count();


return 0;
}