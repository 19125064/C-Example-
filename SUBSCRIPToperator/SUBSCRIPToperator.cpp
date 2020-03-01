#include<iostream>
using namespace std;

const int SIZE = 10;
class Safearay
{
public:
	Safearay()
	{
		register int i;
		for (i = 0; i < SIZE; i++)
		{
			arr[i] = i;

		}
	}


	int& operator[](int i)
	{
		if (i > SIZE)
		{
			cout << "THE NUMBER IS TOO BIG" << endl;
			return arr[0];

		}
		return arr[i];
	}


private:
	int arr[SIZE];

};

int main()
{
	Safearay A;
	cout << "The number of A[2] " << A[2] << endl;
	cout << "The number of A[5] " << A[5] << endl;
	cout << "The number of A[12] " << A[12] << endl;
	
	return 0;
}