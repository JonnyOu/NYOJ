/*
nyoj 676
二分法快速求幂 

*/
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int T, s = 1;
	cin >> T;
	while (T--) {
		long long N, P, M, ans = 1, t;
		cin >> N >> P >> M;
		t = pow(10, M);
		N = N%t;
		while (P) {
			if (P%2 == 1) 
				ans = ans*N%t;
			P /= 2;
			N = (N*N)%t;
		}
		cout << "Case #" << s << ": " << ans << endl;
		s++;
	}
	return 0;
}
