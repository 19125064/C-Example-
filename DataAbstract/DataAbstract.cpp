#include<iostream>
using namespace std;
class Adder
{
public:
	Adder(int i=0)
	{
		total = i;

	}
	void addNum(int number)
	{
		total =total+  number;

	}
	int  getTotal()
	{
		return total;
	};
private:
	int total;

};

int main()
{
	Adder a;

	a.addNum(1);
	a.addNum(2);
	a.addNum(3);
	cout << "Toatal: " << a.getTotal() << endl;
	return 0;
}