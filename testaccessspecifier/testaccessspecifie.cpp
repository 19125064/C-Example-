#include<iostream>
using namespace std;
class Box
{
protected:
	double width;
};

class  SmallBox :public Box
{
public:
	void setSmallBoxWidth(double wid);
	double getSmallBoxWidth(void);

};
double SmallBox::getSmallBoxWidth(void)
{
	return width;
}
void SmallBox::setSmallBoxWidth(double wid)
{
	width = wid;
}
int main()
{
	SmallBox box;
	box.setSmallBoxWidth(5.0);
	cout << "Width of SmallBox: " << box.getSmallBoxWidth() << endl;
	return 0;
}

