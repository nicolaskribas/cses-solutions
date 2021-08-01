#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;


	int base[3] = {0, 6, 28};

	for (int i = 1; i <= min(3, n); i++) {
		cout << base[i - 1] << '\n';
	}
	for (int i = 4; i <= n; i++) {
		long long ans = 0;

		long long square = i * i;

		ans += 2 * (square - 2 - 1);
		ans += 4 * (square - 3 - 1);
		ans += 2 * (square - 4 - 1);

		ans += 2 * (i - 4) * (square - 4 - 1);
		ans += 2 * (i - 4) * (square - 6 - 1);
		ans += (i - 4) * (i - 4) * (square - 8 - 1) / 2; 

		cout << ans << '\n';
	}
}
