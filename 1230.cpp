/*
https://zhidao.baidu.com/question/2270647584698380428.html

*/

#include<cstdio>
using namespace std;

int main() {
	int a, b, c;
	while (~scanf("%d%d%d", &a, &b, &c)) {
		if ((a-b)%3 && (a-c)%3 && (b-c)%3) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
