/***
	�����֪�������250���ƽ����� 
	�����Ӧ����ľ��룬���С��5�������ƽ���������ͬ����
	���� 5 ��Ӧ 7�� ����Ϊ2�� �ƽ�����ֱ��ȡ
	3 4 5 6 7      5 6 7 8 9
	����3���ƽ�������ͬ
	���û�����͹��������Ӧ������Ϊ������ͬ���ƽ�����
	�������ظ����ƽ����� 
	250��ȥ�ظ����ƽ����������Ҫ����ƽ�������
	©�粹�䣺
		1.��N<5λʱ���������ΪN*N*N
				 
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
//		//��������Ӧ����ľ��� 
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
		
		//��6������Ķ�Ӧ�ƽ�����һһ��� 
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
		//�����Ա����ͳ��������Ӧ����λ����ͬ���ƽ��������	
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
