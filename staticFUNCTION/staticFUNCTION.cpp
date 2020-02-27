#include<iostream>
using namespace std;
class Box
{
public:
	static int objectCount;

		Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
		objectCount++;
	}
	double Volume()
	{
		return length * breadth*height;

	}

	static int getCount()
	{
		return objectCount;
	}
private:
	double length;
	double breadth;
	double height;

};


int Box::objectCount = 0;

int main(void)
{

	cout << "Initial Stage Count: " << Box::getCount() << endl;

	Box Box1(3.0, 3.0, 3.0);
	Box Box2(8.0, 8.0, 8.0);
	

	cout << "Final Stage Count£º" << Box::getCount() <<endl;

	return 0;

}