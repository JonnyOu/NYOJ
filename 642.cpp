/*
nyoj 642
����:
��һ��˼·������ÿ��ţ��ÿ����Ҫ������Ǯ�� 
ע��:����۸�һ����ѡ�������ߵ��� 
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		string s, str;
		int p, v, max = 0, d, m;
		for (int i = 0; i < n; i++) {
			cin >> s >> p >> v;
			if (v < 200) continue;
			d = (v/200)*200;
			if (d > 1000) d = 1000;
			if (max < d/p) {
				max = d/p;
				str = s;
				m = v;
			}
			if (max == d/p && m < v) { //���۸�һ��ʱ�������������򣬼�ʹ�ò��� 
				str = s;
				m = v;
			}
		}
		cout << str << endl;
	} 
	return 0;
}
