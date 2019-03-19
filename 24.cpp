//#include<stdio.h>
//#include<math.h>
//int prime(int m);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int m;
//		scanf("%d", &m);
//		if (m == 1)
//		printf("2 1\n");
//		else if (prime(m))
//		printf("%d 0\n", m);
//		else 
//		{
//			for (int i = 1; i < m - 1; i++)
//			{
//				if (prime(m - i))
//				{
//					printf("%d %d\n", m - i, i);
//					break;
//				}
//				else if (prime(m + i))
//				{
//					printf("%d %d\n", m + i, i);
//					break;
//				}
//			}
//		}
//	}
//}
//
//int prime(int m)
//{
//	for (int i = 2; i <= sqrt(m); i++)
//	if (m % i == 0)
//	return 0;
//	return 1;
//}



/*
改进 
*/

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int maxSize = 1000005;
int a[maxSize];

int main() {
	memset(a, 0, sizeof(a));
	a[0] = 1; a[1] = 1; a[2] = 0;  //素数筛选 
	for (int i = 2; i < maxSize/2; i++) {
		if (!a[i]) {
			for (int j = 2; i*j < maxSize; j++)
				a[i*j] = 1;
		}
	}
	
	int T,num,count;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &num);
		count = 0;
		for (;;) {
			if (!a[num-count]) {
				printf("%d %d\n", num-count, count);
				break;
			}
			if (!a[num+count]) {
				printf("%d %d\n", num+count, count);
				break;
			}
			count++;
		}
	}
	return 0;
}



