#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Enter A" << endl;
	cin >> a;
	if (a == 0)
		cout << "нулевое число" << endl;
	if (a > 0)
	{
		if (a % 2 == 0)
			cout << "положительное четное число" << endl;
		else
			cout << "положительное нечетное число" << endl;
	}
	if (a < 0)
	{
		if (a % 2 == 0)
			cout << "отрицательное четное число" << endl;
		else
			cout << "отрицательное нечетное число" << endl;
	}
}
