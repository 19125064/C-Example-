#include<iostream>
using namespace std;
class Shape
{
public:
	void setLength(double l)
	{
		length = l;
	}

	void setBreadth(double b)
	{
		breadth = b;
	}

protected:
	double length;
	double breadth;

};

class PaintCost
{
public:
	double getCost(double area)
	{
		return area * 70;
	}

};

class Rectangle:public Shape,public  PaintCost

{
public:
	double getArea()
	{
		return (length*breadth);
	}

};
int main()
{
	Rectangle Rect;
	double area;

	Rect.setLength(5.0);
	Rect.setBreadth(6.0);

	area = Rect.getArea();

	cout << "Total area: " << Rect.getArea() << endl;
	cout << "Toatal cost: " << Rect.getCost(area) << endl;

	return 0;
}
