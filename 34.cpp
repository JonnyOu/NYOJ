/*
nyoj 34
分析:n = (a*70+b*21+c*15)%105
由于70能被5,7整除，而被3除余1
逆向思考，一个由上面公式得到的n，被3除，由于b*21+c*15两部分均被整除掉，剩余a*70,所以a*70/3 余 a,符合条件
那么70，21，15如何寻找？即这个数（如70）能被另两个除数（5，7）整除且被当前除数（3）除余1 
题目要求就是找出符合这个条件的最小的n 
*/

#include<iostream>
using namespace std;

int main() {
	int a,b,c;
	while (cin >> a >> b >> c) {
		int n = (a*70+b*21+c*15)%105;
		if (n < 100)	
			cout << n << endl;
		else 
			cout << "No answer" << endl; 
	}
	return 0;
}

