#include<stdio.h>
int main() {
	int n, m, arr[101] = {0}, brr[100], note = 0, t;
	//arr 记录区域的任务数， brr 按顺序记录接收任务的区域 
	while (scanf("%d%d", &n, &m), n != 0 && m != 0) {
		arr[n] += m;
		t = 0;
		for (int i = 0; i < note; i ++) {
			if (brr[i] == n) {
				t = 1;
				break;
			}
		}
		if (t == 0) brr[note++] = n;
	}
	
	for (int i = 0; i < note; i++) 
		printf("%d %d\n", brr[i], arr[brr[i]]);
}
