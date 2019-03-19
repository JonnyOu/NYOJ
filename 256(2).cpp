#include<stdio.h>
int main() {
	int a[15] = {2,4,11,31,83,227,616,1674,4550,12367,33617,91380,248397,675214,1835421};
	int T;
	scanf("%d", &T);
	while (T--) {
		int k;
		scanf("%d", &k);
		printf("%d\n", a[k-1]);
	}
}
