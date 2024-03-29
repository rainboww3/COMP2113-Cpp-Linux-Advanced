#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double taylor(int n, double x) {

	double sum = 1;

	for (int i = 1; i <= 2 * n + 1; i++) {
		sum *= (x / i);
	}
	if (n % 2 == 1)sum *= -1;
	return sum;
}

int main() {

	double x;
	int n;
	double sum = 0;
	cin >> x >> n;

	for (int j = 0; j < n + 1; j++) {

		sum += taylor(j, x);
		cout << j << " ";
		cout << fixed << setprecision(15) << sum << endl;

	}

	return 0;
}


