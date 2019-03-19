//°ÍÊ²²©ÞÄ
//(M+1)r + s = N 
#include<stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, M;
		scanf("%d%d", &N, &M);
		if (N%(M+1)) printf("Win\n");
		else printf("Lose\n");
	}
}
