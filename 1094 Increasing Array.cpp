#include <iostream>

using namespace std;

int main() {
	long long n, x, prev, ans = 0;
	scanf("%lld", &n);
	scanf("%lld", &prev);
	for (int i = 1; i < n; i++) {
		scanf("%lld", &x);
		ans += max(prev - x, 0ll);
		prev = max(prev, x);
	}
	printf("%lld\n", ans);
}
