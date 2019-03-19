#include<cstdio>
using namespace std;

int main() {
	int x1,y1,x2,y2,x3,y3;
	while (scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3), x1||y1||x2||y2||x3||y3) {
		if ((y3-y1)*(x2-x1) > (y2-y1)*(x3-x1)) printf("0\n");
		else printf("1\n");
	}
	return 0;
}
