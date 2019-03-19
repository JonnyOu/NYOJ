#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

void snake(int n) {
	int t = 1, tot = n*n;
	int a[n][n];
	int i = 0,j = n-1;  
	memset(a, 0, sizeof(a)); //二维数组不能直接赋值 a[n][n] = {0} 无效！！ 
	a[i][j] = t++; 
	while (t <= tot) {
		while (i+1 < n && a[i+1][j] == 0) a[++i][j] = t++;
		while (j-1 >= 0 && a[i][j-1] == 0) a[i][--j] = t++;
		while (i-1 >= 0 && a[i-1][j] == 0) a[--i][j] = t++;
		while (j+1 < n && a[i][j+1] == 0) a[i][++j] = t++;
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) 
			printf("%d ", a[i][j]);
		printf("\n");	
	}	
}

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		float M,X,Y,Z;
		scanf("%f%f%f%f", &M, &X, &Y, &Z);
		printf("%.2f\n", Z*(M*X)/(Y-X));
	}
	return 0;
} 
