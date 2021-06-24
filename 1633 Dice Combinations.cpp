#include <iostream>

using namespace std;

int dp[1000003];

int ways(int n) {
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;

	if (dp[n] != -1)
		return dp[n];

	int x = 0;
	for (int thrw = 1; thrw <= 6; thrw++) {
		x += ways(n - thrw);
		x %= 1000000007;
	}
	return dp[n] = x;
}

int main() {
	int n;
	fill(dp, dp + 1000003, -1);
	scanf("%d", &n);
	printf("%d\n", ways(n));
}
