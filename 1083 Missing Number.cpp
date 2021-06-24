#include <iostream>

using namespace std;

int main() {
	int n, num;
	int arr[200001] = {0};

	scanf("%d", &n);
	for (int i = 0; i < n - 1; i++) {
		scanf("%d", &num);
		arr[num] = 1;
	}

	for (int i = 1; i <= n; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i);
			break;
		}
	}
}
