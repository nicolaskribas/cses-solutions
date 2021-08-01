#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	if (n % 4 == 3) {
		cout << "YES\n";
		cout << n / 2 + 1 << '\n';
		for (int i = 1; i <= n; i++) {
			if (i % 4 == 1 || i % 4 == 2)
				cout << i << ' ';
		}
		cout << '\n' << n / 2 << '\n';
		for (int i = 1; i <= n; i++) {
			if (i % 4 == 3 || i % 4 == 0)
				cout << i << ' ';
		}
		cout << '\n';
	} else if (n % 4 == 0) {
		cout << "YES\n";
		cout << n / 2 << '\n';
		for (int i = 1; i <= n; i++) {
			if (i % 4 == 1 || i % 4 == 0)
				cout << i << ' ';
		}
		cout << '\n' << n / 2 << '\n';
		for (int i = 1; i <= n; i++) {
			if (i % 4 == 2 || i % 4 == 3)
				cout << i << ' ';
		}
		cout << '\n';
	} else {
		cout << "NO\n";
	}
}
