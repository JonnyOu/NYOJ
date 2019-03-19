/*
nyoj 514
感谢:http://blog.csdn.net/xuzengqiang/article/details/7636629 
注意：a,b两个数中不一定a<b,从a到b的1的个数，包括a 
*/

#include<iostream>
#include<cmath>
using namespace std;
int a[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};  
//10k-1+a*(k-1)*10k-2

int fun(int n) {
	int temp = n,sum = 0,count = 0;
	while (temp != 0) {
		int p = temp%10;
		if (p > 1) {
			sum += (a[count]);
		}
		else if (p == 1) {
			sum += (n%a[count]+1);
		}
		sum += p*count*a[count-1];
		temp /= 10;
		count++;
	}
	return sum;
}

int main() {
	int a,b;
	while (cin >> a >> b, a||b) {
		if (a > b) {
			int t = a;
			a = b;
			b = t;
		}
		cout << fun(b)-fun(a-1) << endl;
	}
	return 0;
}
