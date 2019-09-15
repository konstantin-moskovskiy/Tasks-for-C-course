#include <iostream>
using namespace std;

int Factorial(int x) {
	int result = 1;

	if (x <= 0) {
		return 1;
	}
	else {
		for (int i = 1; i <= x; ++i) {
			result *= i;
		}
	}

	return result;
}

int main() {
	int a;

	cin >> a;
	cout << Factorial(a);

	return 0;
}