#include<iostream>
using namespace std;
class Box
{
public:
	static int objectCount;

	Box(double l=2.0,double b=2.0,double h=2.0)
	{
		cout << "Constructor is called. " << endl;
		length = l;
		breadth = b;
		height = h;

		objectCount++;
	}

private:
	double length;
	double breadth;
	double height;

};


int Box::objectCount = 0;
int main(void)
{
	Box Box1(3.0, 3.0, 3.0);
	Box Box2(8.0, 8.0, 8.0);

	cout << "Total objects: " << Box::objectCount << endl;

	return 0;
}