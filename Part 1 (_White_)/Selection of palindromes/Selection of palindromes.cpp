#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool IsPalindrom(string s) {
	for (int i = 0; i < s.size() / 2; ++i) {
		if (s[i] != s[s.size() - i - 1]) {
			return false;
		}
	}

	return true;
}

void PalindromFilter(vector<string> words, int minLength) {
	for (auto s : words) {
		if (IsPalindrom(s) && s.size() >= minLength) {
		cout << s << endl;
		}
	}
}
