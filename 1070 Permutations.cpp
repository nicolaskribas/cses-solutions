#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION\n";
	} else {
		bool first = true;
		for (int i = 2; i <= n; i += 2, first = false) {
			if (!first) cout << ' ';
			cout << i;
		}
		for (int i = 1; i <= n; i += 2, first = false) {
			if (!first) cout << ' ';
			cout << i;
		}
		cout << '\n';
	}
}
