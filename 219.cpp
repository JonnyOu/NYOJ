/*
219.暴力 
解题思路:
求出距离1600 1 1 的天数, 天数加6对7求余，1600 1 1 是星期六  

基姆拉尔森计算公式
if(m==1||m==2) m+=12,y--;
W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400) mod 7
*/

#include<cstdio>
using namespace std;
int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

bool isBissextile(int year) {
	if ((year%4 == 0) && (year%100 != 0) || (year%400 == 0)) return true;
	return false;
}

int main() {
	int y[10000];
	y[1599] = 0;
	for (int i = 1600; i < 9600; i++) {
		if (isBissextile(i)) y[i] = y[i-1] + 366; 
		else y[i] = y[i-1] + 365;
	}
	int year, month, day, sum;
	while (~scanf("%d%d%d", &year, &month, &day)) {
		sum = 5;
		sum += y[year-1];
		for (int i = 0; i < month-1; i++) sum += a[i];
		if ((month > 2) && isBissextile(year)) sum++;
		sum += day;
		printf("%d\n", sum%7);
	}
	return 0;
}

//#include<cstdio>
//using namespace std;
//
//int main() {
//	int y, m, d;
//	while (~scanf("%d%d%d", &y, &m, &d)) {
//		if (m == 1 || m == 2) {
//			m += 12;
//			y--;
//		}
//		printf("%d\n", (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7);
//	}
//} 
