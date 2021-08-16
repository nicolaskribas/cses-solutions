#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n, x;
	vector<int> p;
	cin >> n >> x;
	p.reserve(n);
	for (int i = 0; i < n; i++) {
		int pi;
		cin >> pi;
		p.push_back(pi);
	}

	sort(p.begin(), p.end());

	int front = 0;
	int back = p.size() - 1;

	int ans = 0;
	while (front <= back) {
		while (p[front] + p[back] > x && front < back) {
			ans++;
			back--;
		}
		ans++;
		front++;
		back--;
	}
	cout << ans << '\n';
}
