/*
16 
解题思路:
1.设置每个矩形的长宽，即短边作宽，长边作长
2.按宽度从小到大排列，长边足够，成功嵌套，不足，舍弃 
*/

#include<cstdio>
using namespace std;

typedef struct {
	int x, y;
}Node;

bool cmp(Node a, Node b) {
	return a.x < a.y;
}

int main() {
	
	return 0;
}
