/*
nyoj 1180
����˼·:�ö�����������ʼλ����ӣ�������ʼλ����Χ��4��λ�ã�
�����߹�����ӣ���ʼλ�ó��ӡ��Դ����� 
ÿ����Ӹı����꣬�������ظ�����
������ȱ��� 
*/

#include<iostream>
using namespace std;

typedef struct {
	int l;
	int h;
}Node;

int main() {
	int length, hight, rear, front;
	while (cin >> length >> hight, length||hight) {
		rear = front = -1;
		char c[hight][length];
		Node a[hight*length];
		for (int i = 0; i < hight; i++) 
			for (int j = 0; j < length; j++) {
				cin >> c[i][j];
				if (c[i][j] == '@') {
					++rear;
					a[rear].l = i; a[rear].h = j;
					c[i][j] = '#';
				}
			}
//		cout << a[rear].l << '\n' << a[rear].h << endl;
		while (rear != front) {
			front++;
			int i = a[front].l, j = a[front].h;
//			cout << i << ' ' << j << endl;
			if (c[i+1][j] != '#' && i+1 < hight) {
				c[i+1][j] = '#';
				a[++rear].l = i+1;
				a[rear].h = j;
			}
			if (c[i-1][j] != '#' && i-1 >= 0) {
				c[i-1][j] = '#';
				a[++rear].l = i-1;
				a[rear].h = j;
			}
			if (c[i][j+1] != '#' && j+1 < length) {
				c[i][j+1] = '#';
				a[++rear].l = i;
				a[rear].h = j+1;
			}
			if (c[i][j-1] != '#' && j-1 >= 0) {
				c[i][j-1] = '#';
				a[++rear].l = i;
				a[rear].h = j-1;
			}
		}
		cout << front+1 << endl;
	}
	return 0;
} 
