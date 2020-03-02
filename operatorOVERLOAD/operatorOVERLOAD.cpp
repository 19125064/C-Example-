#include<iostream>
using namespace std;
class Box
{
public:
	void setLength(double len)
	{
		length = len;
	}
	void setBreadth(double bre)
	{
		breadth = bre;
	}
	void setHeight(double hei)
	{
		height = hei;
	}
	double getVolume(void)
	{
		return length * breadth*height;
	}

	Box operator+(const Box& b)
	{
		Box box;
		box.length = this->length + b.length;
		box.breadth = this->breadth + b.breadth;
		box.height = this->height + b.height;
		return box;
	}


	private:
		double length;
		double breadth;
		double height;

};

int main()
{
	Box box1;
	Box box2;
	Box box3;
	double volume = 0.0;

	box1.setLength(2.0);
	box1.setBreadth(2.0);
	box1.setHeight(2.0);

	box2.setLength(3.0);
	box2.setBreadth(3.0);
	box2.setHeight(3.0);

	volume = box1.getVolume();
	cout << "volume of box1: " <<volume <<endl;
	
	volume = box2.getVolume();
	cout << "volume of box2: " << volume << endl;

	box3 = box1 + box2;

	volume =box3.getVolume();
	cout << "volume of box3: " << volume << endl;

	return 0;


}