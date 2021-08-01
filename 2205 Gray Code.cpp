#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<string> a;
	a.reserve(n);
	a.push_back("0");
	a.push_back("1");

	while (--n) {
		int size = a.size() - 1;
		for (int i = size; i >= 0; i--) {
			a.push_back(a[i]);
		}
		for (int i = 0; i < a.size() / 2; i++) {
			a[i] = "0" + a[i];
		}
		for (int i = a.size() / 2; i < a.size(); i++) {
			a[i] = "1" + a[i];
		}
	}

	for (string x : a) {
		cout << x << '\n';
	}
}
