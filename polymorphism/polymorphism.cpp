#include<iostream>
using namespace std;
class Shape
{
public:	Shape(int a=0,int b=0)
	{
		width = a;
		length = b;
	}
		virtual int area() 
		{
			cout << "Parent class area:" << endl;
			return 0;
		}
protected:
	int width;
	int length;

};
class Rectangle :public Shape
{public:

	Rectangle(int a = 0, int b = 0) : Shape(a, b) {};
	int area()
	{
		cout << "Rectangle class area" << endl;
		return (width*length);

	}
};

class Triangle :public Shape
{public:
	Triangle(int a = 0, int b = 0) : Shape(a, b) {};
	int area()
	{
		cout << "Triangle class area" << endl;
		return (width*length / 2);

	}
};
int main()
{
	Shape *shape;
	Rectangle rec(10, 10);
	Triangle tri(10, 10);
	shape =&rec;
	shape->area();
	shape =&tri;
	shape->area();

	return 0;




}














