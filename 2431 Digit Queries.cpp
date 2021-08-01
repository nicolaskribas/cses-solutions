#include <bits/stdc++.h>

using namespace std;

long long int_pow(long long b, long long e) {
	if (e == 0) {
		return 1;
	}

	long long ans = b;
	while (--e) {
		ans *= b;
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);

	int q;
	cin >> q;

	while (q--) {
		long long k;
		cin >> k;

		int digits = 1;
		long long beginIndex = 0;
		for (long long index = 9; index < k;) {
			digits++;
			beginIndex = index;
			index += 9 * int_pow(10, digits - 1) * digits;
		}
		beginIndex++;

		long long numbers = (k - beginIndex) / digits;
		int ansDigit = (k - beginIndex) % digits;
		cout << to_string(int_pow(10, digits - 1) + numbers)[ansDigit] << '\n';
	}
}
