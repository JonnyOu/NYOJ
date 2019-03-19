#include<stdio.h>
#include<string.h>
#define MAX_SIZE 1000
int main() {
	int n, a[MAX_SIZE];
	scanf("%d", &n);
	while (n--) {
		memset(a, 0, sizeof(a));
		int sum, count, num, num1;
		scanf("%d", &num);
		num1 = num;
		count = 1;
		sum = 0;
		for (;;) {
			if (num >= 1000) break;
			num *= num1;
			count++;
		}
		//不添加此代码，数据会溢出，代码不能通过 
		num1 = num1%1000;
		num = num%1000;
		a[num] = count;
		for (;;) {
			num = (num*num1)%1000;
			count++;
			if (a[num]) {
				sum = count + a[num];
				break;
			}
			a[num] = count;
		//printf("a[%d] = ", num); printf("%d\n", count);
		//	if (count < 0) break;
		}
		printf("%d\n", sum);
	}
}
