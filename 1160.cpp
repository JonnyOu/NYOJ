/*
nyoj 1160
分析:容拆定理 http://blog.csdn.net/yuan_jlj/article/details/50850493
A∪B∪C=A+B+C-A∩B-B∩C-C∩A+A∩B∩C
n/a+n/b+n/c-n/gkk(a,b)-n/gkk(b,c)-n/gkk(a,c)+n/gkk(gkk(a,b),c)
gkk(a,b)为最小公倍数 
*/

#include<iostream>
using namespace std;

int num(int a, int b) {
	int temp = a*b;
	while (a % b != 0) {
		int t = b;
		b = a%b;
		a = t;
	}
	return temp/b;
}

int main() {
	int n;
	while (cin >> n, n!=0) {
		int a,b,c,sum;
		cin >> a >> b >> c;
		sum = n/a+n/b+n/c-n/num(a,b)-n/num(a,c)-n/num(b,c)+n/num(num(a,b),c);
		cout << n-sum << endl;		
	}
	return 0;
}
