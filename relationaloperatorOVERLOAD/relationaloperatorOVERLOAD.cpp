#include<iostream>
using namespace std;
class Distance
{
public:
	Distance()
	{
		feet = 0;
		inches = 0;
	}

	 Distance(int f, int i)
	{
		feet = f;
		inches = i;
	}
	void displayDistance()
		{
			cout << "F: " << feet << "I: " << inches << endl;
		}
	Distance operator-()
	{
		feet = -feet;
		inches = -inches;
		return Distance(feet, inches);

	}
	bool operator <(const Distance& d)
	{
		if (feet < d.feet)
		{
			return true;
		}
		if (feet == d.feet && inches < d.inches)
		{
			return true;
		}
		return false;
	}
	
private:
	int feet;
	int inches;

};

int main()
{
	Distance D1(4, 5), D2(4, 4);
	if (D1 < D2)
	{
		cout << "D1 is less than D2" << endl;
	}
	else
	{
		cout << "D2 is less than D1" << endl;
	}
	return 0;
}