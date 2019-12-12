#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите A (0 < A < 1000)" << endl;
	cin >> a;
	if (a / 10 == 0)
	{
		if (a % 2 == 0)
			cout << "четное однозначное число" << endl;
		else
			cout << "нечетное однозначное число" << endl;
	}
	else
	{
		if (a / 100 == 0)
		{
			if (a % 2 == 0)
				cout << "четное двузначное число" << endl;
			else
				cout << "нечетное двузначное число" << endl;
		}
		else
		{
			if (a % 2 == 0)
				cout << "четное трехзначное число" << endl;
			else
				cout << "нечетное трехзначное число" << endl;
		}
	}
}

