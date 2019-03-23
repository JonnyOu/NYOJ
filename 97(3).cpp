#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		double M,X,Y,Z, r;
		cin >> M >> X >> Y >> Z;
		r = Z*M*X/(Y-X);
		printf("%.2f\n", r);
	}
	return 0;
}


