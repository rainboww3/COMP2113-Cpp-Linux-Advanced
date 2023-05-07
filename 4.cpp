#include <iostream>
#include <iomanip>
using namespace std;

char s;

char CaesarShift(char c, int k) {
	bool isUpper = false;

	if (c >= 'A' && c <= 'Z') {
		isUpper = true;
	}

	int y;

	if (s == 'e') {
		if (isUpper) {
			y = ((c - 'A') + k) % 26;

			return 'a' + y;
		}

		else {
			y = ((c - 'a') + k) % 26;

			return 'A' + y;
		}
	}

	else {
		if (isUpper) {
			y = ((c - 'A') - k + 26) % 26;

			return 'a' + y;
		}
		else {
			y = ((c - 'a') - k + 26) % 26;

			return 'A' + y;
		}
	}

	return c;
}

int main() {

	char c;
	int k;

	cin >> s >> k;

	do {
		cin >> c;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			cout << CaesarShift(c, k);
		}

		else {
			cout << c;
		}

	} while (c != '!');

	return 0;
}