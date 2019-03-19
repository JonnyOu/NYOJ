#include<stdio.h>
#include<string.h>
int main() {
	int N;
	while (~scanf("%d", &N)) {
		int count = 0, count1 = 0, flag;
		char a[N][15], b[N][15], c[N][15], s[4][15] = {"bowl","knife","fork","chopsticks"};
		for (int i = 0; i < N; i++)
			scanf("%s", &a[i]);
		for (int i = 0; i < N; i++) 
			for (int j = 0; j < 4; j++) 
				if (!strcmp(a[i], s[j])) 
					strcpy(b[count++], s[j]);
//		strcpy(c[count1++], b[0]); 
//		for (int i = 1; i < count; i++) {
//			flag = 1;
//			for (int j = 0; j < count1; j++) 
//				if (!strcmp(c[j], b[i]))
//					flag = 0;
//			if (flag == 1) {
//				strcpy(c[count1++], b[i]);
//			} 
//		}		
//		for (int i = 0; i < N; i++) 
//			printf("%s ", a[i]);
//		printf("\n");
		for (int i = 0; i < count; i++) 
			printf("%s ", b[i]);
		printf("\n");
//		for (int i = 0; i < count1; i++)
//			printf("%s ", c[i]);
//		printf("\n");
	}
}
