/*
发现规律： 符合规律的数末位都带471
0471 1471 2471 3471。。。。 
*/

#include<stdio.h>
int main() {
	int n;
	long long m;
	scanf("%d", &n);
	while (n--) {
		scanf("%lld", &m);
		printf("%lld\n", (m-1)*1000+471);
	}
}

