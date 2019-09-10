#include <iostream>
using namespace std;

int main() {
	int A, B;

	cin >> A >> B;
	for (A; A <= B; ++A) {
		if (A % 2 == 0) {
			cout << A << " ";
		}
	}

	return 0;
}
