#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> p;
	p.reserve(n);

	long long total = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		total += x;
		p.push_back(x);
	}

	long long ans = numeric_limits<long long>::max();
	for (int bitmask = 0; bitmask < 1 << n; bitmask++) {
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (1 << i & bitmask) {
				sum += p[i];
			}
		}
		ans = min(ans, abs(total - 2 * sum));
	}
	cout << ans << '\n';
}
