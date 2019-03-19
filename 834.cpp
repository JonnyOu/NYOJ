#include<stdio.h>
typedef struct {
	int num;
	int note;
} Node;
int main() {
	int n;
	while (~scanf("%d", &n)) {
		Node a[n],b[3];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i].num);
			a[i].note = i;
		}
		int max, flag;
		for (int i = 0; i < 3; i++) {
			max = a[0].num; flag = 0;
			for (int j = 0; j < n; j++) {
				if (max < a[j].num) {
					max = a[j].num;
					flag = j;
				}
			}
			b[i] = a[flag];
			a[flag].num = -1;
		}
		for (int i = 0; i < 2; i++) 
			for (int j = i+1; j < 3; j++)
				if (b[i].note > b[j].note) {
					Node temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
		printf("%d %d %d %d\n", b[0].note+1, b[1].note+1, b[2].note+1, b[0].num+b[1].num+b[2].num);	
	}
}
