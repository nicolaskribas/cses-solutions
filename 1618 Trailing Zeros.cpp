#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int ans = 0;
	while (n >= 5) {
		n /= 5;
		ans += n;
	}
	cout << ans << '\n';
}
