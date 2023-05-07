#include<iostream>
using namespace std;

int main()
{
	int a, b, divisor1, divisor2;

	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "Divisor 1: ";
	cin >> divisor1;
	cout << "Divisor 2: ";
	cin >> divisor2;

	cout << "M " << divisor1 << " " << divisor2 << endl;

	while (a<b)
	{

		cout << a << " " << !(a%divisor1) << " " << !(a%divisor2) << endl;
		a++;
	}


	return 0;
}