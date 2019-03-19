#include<cstdio>
using namespace std;

//检验是否含有数字7或是7的倍数 
bool JianYan(int n) {
	if (n % 7 == 0) return true; 
	while (n != 0) {
		if (n % 10 == 7) return true;
		n /= 10;
	}
	return false;
}

int main() {
	int n, m, k;
	while (~scanf("%d%d%d", &n, &m, &k), n&&m&&k) {
		int i = 1, j = 1, p = 0, flag = 1;
		for (;;) {
			if (JianYan(i) && j == m) p++;
			if (JianYan(i) && j == m && p == k) break;
			i++;
			if (j == n) {j--; flag = 0;}
			else if (j == 1) {j++; flag = 1;}
			else {if (flag) j++; else j--;} 
		}
		printf("%d\n", i);
	}
	return 0;
} 
