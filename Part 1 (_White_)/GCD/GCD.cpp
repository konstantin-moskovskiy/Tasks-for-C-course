﻿#include <iostream>
using namespace std;

int main() {
	int A, B;

	cin >> A >> B;
	while (A > 0 && B > 0) {
		if (A > B) {
			A %= B;
		}
		else {
			B %= A;
		}
	}
	cout << A + B;

	return 0;
}
