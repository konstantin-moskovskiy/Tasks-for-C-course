#include <iostream>
#include <cmath>
using namespace std;

int main() {
	system("chcp 1251>nul");
	double a, b, c, D, x1, x2;

	cin >> a >> b >> c;
	if (a != 0) {
		D = b * b - 4 * a * c;
		if (D > 0) {
			x1 = (-b - sqrt(D)) / (2 * a);
			x2 = (-b + sqrt(D)) / (2 * a);
			cout << "x1 = " << x1 << " x2 = " << x2;
		}
		else {
			if (D == 0) {
				x1 = (-b) / (2 * a);
				cout << "x = " << x1;
			}
			else
			{
				cout << "Корней нет";
			}
		}
	}
	else
	{
		if (b != 0) {
			x1 = (-c) / b;
			cout << "x = " << x1;
		}
		else
		{
			cout << "Уравнение задано неккоректно";
		}
	}
}
