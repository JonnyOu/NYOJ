//#include<stdio.h>
//#include<string.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n--) {
//		int num, sum = 2, flag1, flag2;
//		scanf("%d", &num);
//		int a[num][2];
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < num; i++)
//			scanf("%d", &a[i][0]);
//		a[0][1] = 1;
//		a[num-1][1] = 1;
//		for (int i = 1; i < num-1; i++) {
//			if (a[i][0]>a[i-1][0] && a[i-1][1]) {
//				a[i][1] = 1;
//				sum++; //printf("%d\n", a[i][0]);
//				continue;
//			}
//			flag1 = 1; flag2 = 1;
//			for (int j = 0; j < i; j++)
//				if (a[j][0] > a[i][0]) {
//					flag1 = 0;
//					break;
//				}
//			for (int j = i+1; j < num; j++)
//				if (a[j][0] > a[i][0]) {
//					flag2 = 0;
//					break;
//				}	
//			if (flag1 || flag2) {
//				a[i][1] = 1; //printf("%d\n", a[i][0]);
//				sum++;
//			}
//		}
//		printf("%d\n", sum);
//	}
//}


#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int num, sum = 2, flag1, flag2;
		scanf("%d", &num);
		int a[num];
		for (int i = 0; i < num; i++) 
			scanf("%d", &a[i]);
		for (int i = 1; i < num-1; i++) {
			flag1 = 1; flag2 = 1;
			for (int j = 0; j < i; j++) 
				if (a[j] > a[i]) {
					flag1 = 0;
					break;
				}
			for (int j = i+1; j < num; j++) 
				if (a[j] > a[i]) {
					flag2 = 0;
					break;
				}
			if (flag1 || flag2) sum++;
		}
		printf("%d\n", sum);
	}
}
