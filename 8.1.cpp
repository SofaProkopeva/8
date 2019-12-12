#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter A and B" << endl;
	cin >> a >> b;
	if (a > b)
		b = a;
	if (b > a)
		a = b;
	else
	{
		a = 0;
		b = 0;
	}
	cout << "New A=" << a << ", B=" << b << endl;
}
