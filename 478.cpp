/*
nyoj 478 
分析:嗯，普通方法过不去。。。。
 
*/ 

#include<iostream> 
#include<cstdio>
using namespace std;
const int maxSize = 500005;
int a[maxSize];
//非原创，佩服 
int main() {
	for (int i = 1; i < maxSize/2 ; i++) 
		for (int j = 2*i; j < maxSize; j += i) 
			a[j] += i;
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", a[n]);
	}
	return 0;
} 

//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int n, sum = 1, i;
//		scanf("%d", &n);
//		for (i = 2; i*i < n; i++) {
//			if (n%i == 0) {
//				sum += i;
//				sum += n/i;
//			}
//		}
//		if (i*i == n) sum += i;
//		printf("%d\n", sum);
//	}
//	return 0;
//}


