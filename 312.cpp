#include<stdio.h>
//ÅĞ¶ÏÈòÄê
int leap(int y); 
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int y, m, d, sum = 365*20;
		scanf("%d-%d-%d", &y, &m, &d);
		if (leap(y) && m==2 && d==29 && !leap(y+20)) {
			printf("-1\n");
			continue;
		}
		for (int i = y+1; i < y+20; i++)
			if (leap(i)) sum++;
		if (leap(y) && leap(y+20)) sum++;
		else if (leap(y) && m<3 && !leap(y+20)) sum++;
		else if (!leap(y) && m>2 && leap(y+20)) sum++;
		printf("%d\n", sum);
	}
}

//ÅĞ¶ÏÈòÄê
int leap(int y) {
	if (y%4==0 && y%100!=0 || y%400==0) return 1;
	return 0;
} 
