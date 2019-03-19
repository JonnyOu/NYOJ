#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int cigarettes, k, sum;
		scanf("%d%d", &cigarettes, &k);
		sum = cigarettes;
		while (cigarettes >= k) {
			sum += cigarettes / k;
			cigarettes = cigarettes/k + cigarettes%k;
		}
		printf("%d\n", sum);
	}
} 
