#include<stdio.h>
#include<math.h>
//×éºÏÊı
int C(int n, int m) {
	if (m < n-m) m = n-m;
	long long ans = 1;
	for (int i = m+1; i <= n; i++) ans *= i;
	for (int i = 1; i <= n-m; i++) ans /= i;
	return ans;
} 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		if (n == 1) printf("8\n");
		else {
			long long sum = pow(9,n-1)*8;
			for (int i = 2; i < n; i += 2) 
				sum += (pow(9,n-i)*C(n,i) - pow(9,n-i-1)*(C(n,i)-C(n-1,i-1)));
				//	printf("%lld\n", sum);
			if (!(n%2)) sum++;
			sum %= 12345;
			printf("%lld\n", sum);
		}
	}
}
