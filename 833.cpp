//石子两个以上就是Yougth赢 
#include<stdio.h>
int main() {
	int n;
	while (~scanf("%d", &n)) {
		if (n <= 2) printf("Hrdv\n");
		else printf("Yougth\n");
	}
}
