#include <bits/stdc++.h>

using namespace std;

vector<int> cache;

int dp(int n) {
	if (n == 0)
		return 0;

	if (cache[n] != -1)
		return cache[n];

	int ans = 1'000'000;
	for (int d = n; d; d /= 10) {
		if (d % 10 == 0)
			continue;
		ans = min(ans, 1 + dp(n - d % 10));
	}
	return cache[n] = ans;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	cache.assign(1'000'001, -1);
	cout << dp(n) << '\n';
}
