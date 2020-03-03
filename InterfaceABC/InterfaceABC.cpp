#include<iostream>
using namespace std;
class Shape
{
public:
	virtual double getArea() = 0;

	void setLength(double l)
	{
		length = l;

	}
	void  setWidth(double w)
	{
		width = w;

	}
protected:
	double length;
	double width;


};

class Rectangle :public Shape
{
public:
	double getArea()
	{
		return length * width;


	}


};

class Triangle :public Shape
{
public:
	double getArea()
	{
		return (length*width / 2);
	}

};

int main()
{
	Rectangle Rect;
	Triangle Tri;

	Rect.setLength(10);
	Rect.setWidth(10);

	cout << "Total area: " << Rect.getArea() << endl;

	Tri.setLength(10);
	Tri.setWidth(10);

	cout << "Total Area: " << Tri.getArea() << endl;

	return 0;

}