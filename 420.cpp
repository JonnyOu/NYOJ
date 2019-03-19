#include<cstdio>
using namespace std;

//¿ìËÙÇóÃÝ
int pow(int a, int n) {
	int result = 1;
	a = a % 10003;
	while (n > 0) {
		if (n % 2 == 1) result = result * a % 10003; 
		n /= 2;
		a = a*a%10003;
	}
	return result;
} 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, p, sum = 0;
		scanf("%d%d", &n, &p);
		for (int i = 1; i <= n; i++) 
			sum = (sum + pow(i, p)) % 10003;
		printf("%d\n", sum);
	}
}
