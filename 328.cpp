/*
nyoj 328
看了解题思路来a。。。输入的两个坐标的差的绝对值为一奇一偶时，能完全覆盖，否则不能 
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int m,n;
		scanf("%d%d", &m, &n);
		if ((m*n)%2 == 0) {
			int x1,y1,x2,y2;
			scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
			if ((int)(abs(x1-y1) + abs(x2-y2)) % 2 == 0) 
				puts("NO");
			else puts("YES");
		} 
		else puts("NO");
	} 
	return 0;
}
