#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> result = {};
	int n;

	cin >> n;
	while (n > 0) {
		if (n % 2 == 0) {
			result.push_back(0);
		}
		else {
			result.push_back(1);
		}
		n /= 2;
	}
	for (int i = result.size() - 1; i >= 0; --i) {
		cout << result[i];
	}
}
