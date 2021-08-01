#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	sort(s.begin(), s.end());

	vector<string> v;
	do {
		v.push_back(s);
	} while (next_permutation(s.begin(), s.end()));

	cout << v.size() << '\n';
	for (string a : v) {
		cout << a << '\n';
	}
}
