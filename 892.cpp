#include<stdio.h>
typedef struct {
	char name[15];
	float price;
	int vol;
} Milk;
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int m;
		float sum = 0.0;
		scanf("%d", &m);
		Milk s[m];
		for (int i = 0; i < m; i++) {
			scanf("%s%f%d", s[i].name, &s[i].price, &s[i].vol);
		}
		for (int i = 0; i < m; i++) {
			if (s[i].price >= 1.5 && s[i].price <= 5 && s[i].vol <= 300) {
				printf("%s\n", s[i].name);
				sum += s[i].price;
			}
		}
		if (sum == 0) {
			printf("-1\n");
		}
		else {
			printf("%.1f\n", sum);
		}
		
	}
}
