/*
解题思路:
把范围内的数字含有多少个符合条件的数用数组记录下来
*/

#include<cstdio>
#include<cstring>
const int MaxSize = 1000000;

int a[MaxSize], b[MaxSize], c[6];

void F() {
	memset(a, 0, MaxSize*sizeof(int));
	memset(b, 0, MaxSize*sizeof(int));
	for (int i = 125; i < 1000000; i++) {
		int five = 0, two = 0, one = 0;
		c[0] = i%10;
		c[1] = i/10%10;
		c[2] = i/100%10;
		c[3] = i/1000%10;
		c[4] = i/10000%10;
		c[5] = i/100000%10;
		for (int j = 0; j < 4; j++) {
			if (c[j] == 1 && c[j+1] == 2 && c[j+2] == 5) {
				a[i] = a[i-1] + 1;
				break;
			}
			if (j == 3) 
				a[i] = a[i-1];
		}
		for (int j = 0; j < 6; j++) {
			if (c[j] == 5) five++;
			if (c[j] == 2) two++;
			if (c[j] == 1) one++;
		}
		if (five && two && one) 
			b[i] = b[i-1] + 1;
		else 
			b[i] = b[i-1];
	}
}

int main() {
	F();
	int x, y, s = 0;
	while (~scanf("%d%d", &x, &y)) {
		s++;
		printf("Case %d:%d %d\n", s, b[y]-b[x-1], a[y]-a[x-1]);
	}
	return 0;
}
