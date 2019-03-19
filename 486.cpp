#include<cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	getchar();
	while (T--) {
		int a, e, c;
		char b, d;
		scanf("%d%c%d%c%d", &a, &b, &c, &d, &e);
		if (b == '+') {
			if (a + c != e) printf("Wrong Answer\n%d\n", a + c);
			else printf("Accept\n");
		}
		else if (b == '-') {
			if (a - c != e) printf("Wrong Answer\n%d\n", a - c);
			else printf("Accept\n");
		}
		else if (b == '*') {
			if (a * c != e) printf("Wrong Answer\n%d\n", a * c);
			else printf("Accept\n");
		}
		else if (b == '/') {
			if (c == 0) printf("Input Error\n");
			else if (a / c != e) printf("Wrong Answer\n%d\n", a / c);
			else printf("Accept\n");
		}
		else {
			if (a % c != e) printf("Wrong Answer\n%d\n", a % c);
			else printf("Accept\n");
		}
	}
} 
