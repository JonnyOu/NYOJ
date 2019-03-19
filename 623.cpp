#include<stdio.h>
int main() {
	int m,n,k;
	while (scanf("%d%d%d", &m,&n,&k), m != 0 && n != 0 && k != 0) {
		int arr[m][n], brr[n][k], crr[50][50] = {0}, sum;
		for (int i = 0; i < m; i++) //输入设置 
			for (int j = 0; j < n; j++)
				scanf("%d", &arr[i][j]);
		for (int i = 0; i < n; i++) 
			for (int j = 0; j < k; j++)
				scanf("%d", &brr[i][j]);
				
		for (int i = 0; i < m; i++) { //对应位置相加 
			for (int j = 0; j < k; j++) {
				for (int x = 0; x < n; x++) 
				crr[i][j] += arr[i][x] * brr[x][j];
			}
		}
	
		for (int i = 0; i < m; i++) { //输出 
			for (int j = 0; j < k; j++) {
				printf("%d ", crr[i][j]);
			}
			printf("\n"); 
		}
	}
}
