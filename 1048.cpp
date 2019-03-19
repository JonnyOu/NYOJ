/***
	由题可知，最多有250种破解密码 
	求出对应密码的距离，如果小于5，表明破解密码有相同数字
	例如 5 对应 7， 距离为2， 破解密码分别可取
	3 4 5 6 7      5 6 7 8 9
	则有3个破解密码相同
	当用户密码和工厂密码对应的密码为都有相同的破解密码
	则可组成重复的破解密码 
	250减去重复的破解密码等于需要求的破解密码数
	漏电补充：
		1.当N<5位时，密码个数为N*N*N
				 
**/ 

#include<stdio.h>
#include<string.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int N, t[6], a[3], sum = 0, b[6][5];
		scanf("%d", &N);
		for (int i = 0; i < 6; i++) 
			scanf("%d", &t[i]);
//		//求两个对应密码的距离 
//		for (int i = 0; i < 3; i++) {
//			if (t[i] > t[i+3]) {
//				if (t[i]-t[i+3] > N-t[i]+t[i+3]) a[i] = N-t[i]+t[i+3];
//				else a[i] = t[i]-t[i+3];	
//			}
//			else if (t[i] < t[i+3]) {
//				if (t[i+3]-t[i] > N-t[i+3]+t[i]) a[i] = N-t[i+3]+t[i];
//				else a[i] = t[i+3]-t[i]; 
//			}
//			else a[i] = 0;
//		}
		
		//将6个密码的对应破解密码一一求出 
		for (int i = 0; i < 6; i++) 
			for (int j = 0; j < 5; j++) {
				int note = t[i]+j-2;
				if (note>0 && note<= N) b[i][j] = note;
				else if (note>N) b[i][j] = note-N;
				else if (note<=0) b[i][j] = N+note;
			}
//		for (int i = 0; i < 6; i++) {
//			for (int j = 0; j < 5; j++)
//				printf("%d ", b[i][j]);	
//			printf("\n");
//		}
//		
		//计算会员密码和出厂密码对应密码位上相同的破解密码个数	
		memset(a, 0, sizeof(a));	
		for (int i = 0; i < 3; i++) 
			for (int j = 0; j < 5; j++) 
				for (int k = 0; k < 5; k++)
					if (b[i][j] == b[i+3][k])
						a[i]++;
		
//		for (int i = 0; i < 3; i++)
//			printf("%d ", a[i]); 
//			printf("\n");
		if (N <= 4) {
			printf("%d\n", N*N*N);
			continue;
		}
		printf("%d\n", 250-a[0]*a[1]*a[2]);
	}
}
