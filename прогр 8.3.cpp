#include <iostream>
using namespace std;

int main()
{
	double x1, x2, x3, y1, y2, y3, ab, ac;
	cout << "Eter the coordinates of point A." << endl;
	cin >> x1 >> y1;
	cout << "Eter the coordinates of point B." << endl;
	cin >> x2 >> y2;
	cout << "Eter the coordinates of point C." << endl;
	cin >> x3 >> y3;
	ab = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	ac = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	if (ab < ac)
		cout << "B. AB = " << ab << endl;
	if (ac < ab)
		cout << "C. AC = " << ac << endl;
	else
		cout << "AB = AC = " << ab << endl;
}
