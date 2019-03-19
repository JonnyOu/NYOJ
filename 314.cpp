/*
nyoj 314
规律: 设f(1)=x,f(2)=y,推出f(20)=x*2584+y*4181
*/ 

#include<iostream>
using namespace std;

int main() {
	int N, n, p, q, i;
	bool flag;
	cin >> N;
	while (N--) {
		cin >> n;
		flag = false;
		p = n/4181;
		for (i = 0; i <= p; i++) {
			if ((n-4181*i)%2584 == 0) {
				flag = true;
				break;
			}
		}
		if (flag == true) cout << (n-4181*i)/2584 << ' ' << i << endl;
		else cout << "No answer" << endl;
	}
	return 0;
} 
