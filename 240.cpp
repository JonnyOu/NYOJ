#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_SIZE 201

int main() {
	int T, M, sum = 0;
	
	//����༶���Ͳ�ѯ����
	scanf("%d%d", &T, &M);
	
	int a[T][MAX_SIZE], b[M];
	memset(a, 0, sizeof(a));
	
	//�������� 
	for (int i = 0; i < T; i++) {
		scanf("%d", &a[i][0]);
		sum += a[i][0];//����ѧ������ 
		for (int j = 1; j <= a[i][0]; j++)
			scanf("%d", &a[i][j]);
	}
	
	//��������
	int stu[sum], count = 0;
	for (int i = 0; i < T; i++) 
		for (int j = 1; j <= a[i][0]; j++) 
			stu[count++] = a[i][j];
	sort(stu, stu+sum);
	//ȥ��
	int stu1[sum], flag = stu[0], count1 = 1;
	memset(stu1, 0, sizeof(stu1));
	stu1[0] = flag;
	for (int i = 1; i < sum; i++) {
		if (flag != stu[i]) {
			stu1[count1++] = stu[i];
			flag = stu[i];
		}
	} 
	
	//��������
	for (int i = 0; i < M; i++) 
		scanf("%d", &b[i]);
		
//	for (int i = 0; i < sum; i++) 
//		printf("%d ", stu[i]);
//	printf("\n");
//	for (int i = 0; i < count1; i++) 
//		printf("%d ", stu1[i]);	
//	printf("\n");
	
	//������� 
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < T; j++) {
			for (int k = 1; k <= a[j][0]; k++) {
				if (a[j][k] == stu1[count1-b[i]]) {
					printf("%d %d\n", j+1, k);
				}
			}
		}
	}
} 
