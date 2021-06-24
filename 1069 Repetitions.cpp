#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char s[1000001];
	scanf("%s", s);
	
	int last = -1, ans = 0, actual;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] != last) actual = 1;			
		else actual++;
		ans = max(actual, ans);
		last = s[i];
	}
	printf("%d\n", ans);
}
