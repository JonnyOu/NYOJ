/*
nyoj 325
枚举，暴力破解 
*/ 

#include<stdio.h>
#include<math.h>
const int maxSize = 25;
int n,a[maxSize],temp,sum,min;

void dfs(int star) {
	if (star == n) return ;
	if (fabs(sum-2*temp) < min) min = fabs(sum-2*temp); //求最小值 
	for (int i = star; i < n; i++) {
		temp += a[i];
		dfs(i+1);
		temp -= a[i]; 
	}
}

int main() {
	while (~scanf("%d", &n)) {
		sum = temp = 0; min = 100000;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			sum += a[i];
		}
		dfs(0);
		printf("%d\n", min);
	} 
	
	return 0;
}
