#include <bits/stdc++.h>

using namespace std;

string s;
bool visited[7][7] = {false};

bool valid(int i, int j) {
	if (i < 0 || j < 0 || i > 6 || j > 6) {
		return false;
	} else if (visited[i][j]) {
		return false;
	} else {
		return true;
	}
}

int dfs(int i, int j, int d) {

	if (not valid(i, j)) {
		return 0;
	}

	if (i == 6 && j == 0) {
		if (d == 48) {
			return 1;
		} else {
			return 0;
		}
	}

	if (valid(i + 1, j) && valid(i - 1, j) && not valid(i, j + 1) &&
			not valid(i, j - 1)) {
		return 0;
	}
	if (valid(i, j + 1) && valid(i, j - 1) && not valid(i + 1, j) &&
			not valid(i - 1, j)) {
		return 0;
	}

	if (valid(i + 1, j) && valid(i, j + 1) && not valid(i + 1, j + 1)) {
		return 0;
	}
	if (valid(i + 1, j) && valid(i, j - 1) && not valid(i + 1, j - 1)) {
		return 0;
	}
	if (valid(i - 1, j) && valid(i, j + 1) && not valid(i - 1, j + 1)) {
		return 0;
	}
	if (valid(i - 1, j) && valid(i, j - 1) && not valid(i - 1, j - 1)) {
		return 0;
	}

	int ans = 0;
	visited[i][j] = true;
	if (s[d] == 'R' || s[d] == '?') {
		ans += dfs(i, j + 1, d + 1);
	}
	if (s[d] == 'D' || s[d] == '?') {
		ans += dfs(i + 1, j, d + 1);
	}
	if (s[d] == 'L' || s[d] == '?') {
		ans += dfs(i, j - 1, d + 1);
	}
	if (s[d] == 'U' || s[d] == '?') {
		ans += dfs(i - 1, j, d + 1);
	}
	visited[i][j] = false;
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);

	cin >> s;
	cout << dfs(0, 0, 0) << '\n';
}
