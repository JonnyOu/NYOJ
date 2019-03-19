/*
nyoj 1073
����˼·: 
������ά���飬n*n��С���洢��ǰx�������������� 
�ռ�����̫�󡣡� 

�Ľ�:
�����ṹ�壬�洢���ݺ�����˳��
�ṹ��������������������
ÿ�β�ѯ��ͷ����
�ҵ�˳��С�ڵ���x�ĵ�i���� 
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
