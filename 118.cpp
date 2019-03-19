/*
nyoj 1180
解题思路:用队列来做，起始位置入队，遍历起始位置周围的4个位置，
可以走过即入队，起始位置出队。以此类推 
每次入队改变坐标，解决入队重复问题
广度优先遍历 
*/

#include<iostream>
using namespace std;

typedef struct {
	int l;
	int h;
}Node;

int main() {
	int length, hight, sum;
	while (cin >> length >> hight, length||hight) {
		char c[hight][length];
		Node a[hight*length];
		for (int i = 0; i < hight; i++) 
			for (int j = 0; j < length; j++) 
				cin >> c[i][j];
		
	}
	return 0;
} 
