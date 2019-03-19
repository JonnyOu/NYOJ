//历史性的一刻 
#include<stdio.h>
int main() {
	int n, sum, arr[10], note;
	while (~scanf("%d", &n)) {
		note = n; sum = 0;
		
		for (int i = 0; i < 10; i++) 
			scanf("%d", &arr[i]);
		for (int i = 0; i < 10; i++) {
			if (note == 0) break;
			if (arr[i] == 1) ++note;
			else --note;
			sum++;
		}
		
		printf("%d\n", sum);
	}
}
