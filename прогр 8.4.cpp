#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "Enter the coordinates of the point: x and y (x!=0, y!=0)" << endl;
	cin >> x >> y;
	if (x > 0)
	{
		if (y > 0)
			cout << "1" << endl;
		else
			cout << "4" << endl;
	}
	else
	{
		if (y > 0)
			cout << "2" << endl;
		else
			cout << "3" << endl;
	}
}
