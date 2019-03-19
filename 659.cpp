#include<stdio.h>
//判断三角形：任意两边之和大于第三边 
int main() {
	int n, m;
	scanf("%d", &n);
	m = n;
	while (n--) {
		int x, y, z;
		scanf("%d%d%d", &x, &y, &z);
		if (x == y && x == z) {//先判断等边三角形 
			printf("Case #%d:\nYE YE YE\n", m-n);
		}
		else {
			if (x+y>z && x+z>y && y+z>x) {
				if (x==y || x==z || y==z)//判断等腰三角形 
					printf("Case #%d:\nYE YE\n", m-n);
				else
					printf("Case #%d:\nYE\n", m-n); //判断普通三角形 
			}
			else printf("Case #%d:\nNO\n", m-n); 
		}
	}
} 
