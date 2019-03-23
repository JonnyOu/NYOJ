/*
直到三角形三个点的坐标，求面积公式:
	S = abs((x1y2+x2y3+x3y1-x1y3-x2y1-x3y2)/2)

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	double x1,y1,x2,y2,x3,y3;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
		if (!x1&&!y1&&!x2&&!y2&&!x3&&!y3) break;
		double s = abs((x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2)/2);
		printf("%.1f\n", s);
	}
	return 0;
}
