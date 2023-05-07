
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float x, sum;
	int a, n;
	sum = 0;
	cin >> x >> n;

	for (int i = 0; i < n + 1; i++) {

		cin >> a;

		sum += a;
		if (i == n) {
			break;
		}
		sum *= x;

	}


	std::cout << std::fixed;
	std::cout << std::setprecision(6);
	std::cout << sum;

	return 0;
}

