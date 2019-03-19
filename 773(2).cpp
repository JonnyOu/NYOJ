//二分法  不断缩小搜索范围，直到搜索到符合的取值
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	long mid, left, right;
	double p;
	int n;
	while (~scanf("%d%lf", &n, &p)) {
		if (n == 0 && p == 0.0) break;
		left = 0, right = 1000000000;
		 
		while (left < right) {
			mid = (left+right)/2;
			if (pow(mid, n) == p) break;   
			if (pow(mid, n) < p) left = mid;	
			if (pow(mid, n) > p) right = mid;
		}
		printf("%ld\n", mid);
	}
	return 0;
}
