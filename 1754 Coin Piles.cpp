#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	while (t--) {
		long long a, b;
		cin >> a >> b;

		long long x = 2 * a - b;
		long long y = 2 * b - a;

		if (x % 3 == 0 && y % 3 == 0 && x >= 0 && y >= 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
