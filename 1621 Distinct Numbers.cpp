#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	unordered_set<int> x;
	x.reserve(n);

	while (n--) {
		int xi;
		cin >> xi;
		x.insert(xi);
	}
	cout << x.size() << '\n';
}
