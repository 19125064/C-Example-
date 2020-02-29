#include<iostream>
using namespace std;
class printData
{
public:
	void print(int i)
	{
		cout << "int is: " << i << endl;
	}
	void print(double f)
	{
		cout << "double is: " << f << endl;
	}
	void print(char c[])
	{
		cout << "char is: " << c << endl;
	}
	


};

int main(void)
{
	printData pd;

	pd.print(5);

	pd.print(105.666);
	
	
	char c[] = "hello,world!";
	pd.print(c);
	return 0;
}