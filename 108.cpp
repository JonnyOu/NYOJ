/*
��ͨ������ʱ
����˼·����¼��ǰʿ������ɱ������λ���������ֵΪ�ⲿ��ʿ������ɱ���� 
*/ 
#include<cstdio>
using namespace std;

int a[1000000];

int main() {
	int N, M, m, n, k;
	scanf("%d%d", &N, &M);
	a[0] = 0;
	for (int i = 1; i <= N; i++) {
		scanf("%d", &k);
		a[i] = a[i-1]+k;
	}
	for (int i = 0; i < M; i++) {
		scanf("%d%d", &m, &n);
		printf("%d\n", a[n]-a[m-1]);
	}
	return 0;
}
