#include<stdio.h>
#include<math.h>
int prime(int n);
int main() {
	int n, m;
	long long sum;
	scanf("%d", &n);
	while (n--) {
		sum = 1;
		scanf("%d", &m);
		for (int i = 2; i <= m; i++) {
			if (prime(i)) {
				sum = (sum*i)%1000000;	
			} 
		}
		printf("%d\n", sum);
	}
} 

int prime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
