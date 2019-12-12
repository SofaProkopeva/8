#include <iostream>
using namespace std;

int main()
{
	double a, b, c, S;
	cout << "Enter A, B, C" << endl;
	cin >> a >> b >> c;
	if (a > b)
	{
		if (a > c)
		{
			if (b > c)
				S = a + b;
			else
				S = a + c;
		}
		else
			S = c + a;
	}
	else
	{
		if (b > c)
		{
			if (a > c)
				S = b + a;
			else
				S = b + c;
		}
		else
			S = c + b;
	}
	cout << "Sum = " << S << endl;
}

