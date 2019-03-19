/*
nyoj 971
分析:
很久之前看到的一道题，因为没思路就放下了，真的是偶然看到偶然又有了思路 
1.最少时间:距离最中间的蚂蚁跑出去就是最少要花的时间
2.最长时间:距离最边的蚂蚁跑到另一边所花时间最短  
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double N,L,n,min,max,t;
	while (cin >> N >> L) {
		min = L, max = 0;
		t = L/2;
		for (int i =0; i < N; i++) {
			cin >> n;
			if (abs(t-n) < min) min = abs(t-n);
			if (((L-n)>max) || (n>max)) {
				if (L-n > n) max = L-n;
				else max = n;
			}
		}
		if (abs(max-L)>max) max = abs(max-L);
		cout << "The minimum time is: " << t-min << endl;
		cout << "The maximum time is: " << max << endl;
	}
	return 0;
}
