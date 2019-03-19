/*
nyoj 639
分析:防止巧合，5项都验证 
*/

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
const int maxSize = 5;
int a[maxSize];
/*
等差数列 
*/ 
void equDif() {
	int x = a[1] - a[0], s = a[4];
	for (int i = 0; i < maxSize; i++) {
		if (i != maxSize-1) {
			cout << (s += x) << ' ';
		}
		else 
			cout << (s += x) << endl;
	}
}

/*
等比数列 
*/
void equRat() {
	int x = a[1] / a[0], s = a[4];
	for (int i = 0; i < maxSize; i++) {
		if (i != maxSize-1) {
			cout << (s *= x) << ' ';
		}
		else 
			cout << (s *= x) << endl;
	}
}

/*
斐波那契数列 
*/ 
void Fabo() {
	int c = a[3], d = a[4];
	for (int i = 0; i < maxSize; i++) {
		if (i != maxSize-1) {
			cout << (c+d) << ' ';
			int t = d;
			d = c+d;
			c = t;
		}
		else {
			cout << (c+d) << endl;
			int t = d;
			d = c+d;
			c = t;
		}
	}
}

int main() {
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]) {
		if ((a[1]-a[0] == a[2]-a[1]) && (a[2]-a[1] == a[3]-a[2]) && (a[3]-a[2]==a[4]-a[3])) {
			equDif();
		}
		else if ((a[1]*a[1]==a[0]*a[2]) && (a[2]*a[2]==a[1]*a[3]) && (a[3]*a[3]==a[2]*a[4]) &&
		 (a[0] != 0) && (a[1] != 0) && (a[2] != 0) && (a[3] != 0) && (a[4] != 0)) {
			equRat();
		}
		else if ((a[2]==a[0]+a[1]) && (a[3]==a[1]+a[2]) && (a[4]==a[2]+a[3])) {
			Fabo();
		}
		else {
			cout << "None" << endl;
		}
	}
	return 0;
}
