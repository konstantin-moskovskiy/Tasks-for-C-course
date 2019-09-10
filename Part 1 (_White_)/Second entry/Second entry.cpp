#include <iostream>
using namespace std;

int main() {
	string f;
	int count = 0, n, otvet = 0;

	cin >> f;
	for (int i = 0; i < f.size(); ++i) {
		if (f[i] == 'f') {
			count++;
			if (count == 2) {
				cout << i;
				break;
			}
		}
	}
	if (count == 0) {
		cout << -2;
	}
	else
	{
		if (count == 1) {
			cout << -1;
		}
	}
}
