#include <bits/stdc++.h>

using namespace std;

bool colUsed[8] = {false};
bool diag1Used[15] = {false};
bool diag2Used[15] = {false};
char board[8][8];

int rec(int row) {
	if (row == 8) {
		return 1;
	}

	int ans = 0;
	for (int col = 0; col < 8; col++) {
		if (colUsed[col] or diag1Used[row + col] or diag2Used[row - col + 7] or
				board[row][col] == '*') {
			continue;
		}

		colUsed[col] = true;
		diag1Used[row + col] = true;
		diag2Used[row - col + 7] = true;

		ans += rec(row + 1);

		colUsed[col] = false;
		diag1Used[row + col] = false;
		diag2Used[row - col + 7] = false;
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> board[i][j];
		}
	}

	cout << rec(0) << '\n';
}
