#include <iostream>
using namespace std;

int main() {
	double ishodnaya_stoimost, A, B, skidka_A, skidka_B;

	cin >> ishodnaya_stoimost >> A >> B >> skidka_A >> skidka_B;

	if (ishodnaya_stoimost > A) {
		if (ishodnaya_stoimost > B) {
			cout << ishodnaya_stoimost - ishodnaya_stoimost * skidka_B / 100;
		}
		else
		{
			cout << ishodnaya_stoimost - ishodnaya_stoimost * skidka_A / 100;
		}
	}
	else {
		cout << ishodnaya_stoimost;
	}
}
