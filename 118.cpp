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
