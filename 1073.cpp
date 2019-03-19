/*
nyoj 1073
解题思路: 
创建二维数组，n*n大小，存储由前x个数的升序排序 
空间需求太大。。 

改进:
建立结构体，存储数据和输入顺序
结构体数组数据域升序排序
每次查询从头遍历
找到顺序小于等于x的第i个数 
*/ 

#include<iostream>
#include<algorithm>
using namespace std;

struct Node {
	int data;
	int num;
};

bool cmp(Node a, Node b) {
	return a.data < b.data;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, m, k, t;
		cin >> n >> m;
		Node a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i].data;
			a[i].num = i;
		}
		sort(a, a+n, cmp);
		for (int i = 0; i < m; i++) {
			cin >> k;
			k--;
			t = -1;
			for (int j = 0; j < n; j++) {
				if (a[j].num <= k) t++;
				if (t == i) {
					cout << a[j].data << endl;
					break;
				}
 			}
		}
	}
	return 0;
}
