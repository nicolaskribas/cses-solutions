#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		long long turn = max(x, y);
		if (turn & 1) {
			cout << turn * turn - (turn - 1) - x + y << '\n';
		} else {
			cout << turn * turn - (turn - 1) - y + x << '\n';
		}
	}
}
