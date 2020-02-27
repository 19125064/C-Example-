#include<iostream>
using namespace std;
class Box
{
public:
	Box(double l=2.0,double b=2.0,double h=2.0)
	{
		cout << "constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
	}
	double Volume()
	{
		return length * breadth*height;
	}
	int compare(Box box)
	{
		return this->Volume() > box.Volume();
	}
private:
	double length;
	double breadth;
	double height;


};
int main(void)
{
	Box Box1(13.0, 13.0, 13.0);
	Box Box2(8.0, 8.0, 8.0);

	if (Box1.compare(Box2))
	{
		cout << "Box1 is smaller than Box2" << endl;
	}
	else
	{
		cout << "Box1 is no less than Box2" << endl;

	}
	return 0;
}