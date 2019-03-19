#include<stdio.h>
#define maxn 55
//ÄæÐòÊä³öº¯Êý
int NX(int n) {
	int sum = 0;
	while (n) {
		sum = sum*10+n%10;
		n /= 10;
	}
	return sum;
} 
typedef struct {
	int num;
	int note;
} Node;
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b, j = 0;
		Node t[maxn];
		scanf("%d%d", &a, &b);
		for (int i = a; i <= b; i++) {
			t[j].num = NX(i);
			t[j].note = j;
			j++;
		}
		for (int i = 0; i < j-1; i++) 
			for (int k = i+1; k < j; k++)
				if (t[i].num > t[k].num) {
					Node temp = t[i];
					t[i] = t[k];
					t[k] = temp;
				}
//		for (int i = 0; i < j; i++) 
//			printf("%d ", t[i].num);
//		printf("\n");
		for (int i = 0; i < j; i++)
			printf("%d ", t[i].note+a);
		printf("\n");
	}
} 
