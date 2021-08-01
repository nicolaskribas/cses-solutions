#include <bits/stdc++.h>

#define ALPHABET_SIZE 'Z' - 'A' + 1

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	vector<int> count;
	count.assign(ALPHABET_SIZE, 0);
	for (char c : s) {
		count[c - 'A']++;
	}

	int odds = 0;
	char middle;
	for (int c = 0; c < ALPHABET_SIZE; c++) {
		if (count[c] % 2 != 0) {
			odds++;
			middle = c + 'A';
		}
	}

	if (odds > 1) {
		cout << "NO SOLUTION\n";
	} else {
		for (int c = 0; c < ALPHABET_SIZE; c++) { // left
			for (int n = 0; n < count[c] / 2; n++) {
				cout << char('A' + c);
			}
		}
		if (odds != 0) {
			cout << middle;
		}
		for (int c = ALPHABET_SIZE - 1; c >= 0; c--) { // rigth
			for (int n = 0; n < count[c] / 2; n++) {
				cout << char('A' + c);
			}
		}
		cout << '\n';
	}
}
