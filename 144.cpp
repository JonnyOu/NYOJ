//�ж϶�Ԫһ�η���ax+by=c�������⣺a��b����������ܱ�c����
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		while (a % b != 0) {
			int temp = b;
			b = a % b;
			a = b;
		}
		if (c % b == 0) printf("Yes\n");
		else printf("No\n");
	}
} 
