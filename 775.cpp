/*
775.
扩展欧几里得算法
sa + tb = gcd  
s 和 t 是通解 
http://blog.csdn.net/zhjchengfeng5/article/details/7786595
*/
#include<cstdio>
using namespace std;

int e_gcd(int a, int b, int &s, int &t) {
	if (b == 0) {
		s = 1;
		t = 0;
		return a;
	}
	int ans = e_gcd(b, a%b, s, t), temp = s;
	s = t;
	t = temp-a/b*t;
	return ans;
}

int main() {
	int a, b, gcd, s, t;
	while (~scanf("%d%d", &a, &b)) {
		gcd = e_gcd(a, b, s, t);
		printf("%d %d\n", s, t);
	}
	return 0;
}
