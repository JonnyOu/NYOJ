/*
nyoj 642
分析:
第一次思路：计算每种牛奶每天需要花多少钱！ 
注意:假如价格一样，选择容量高的买 
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
			if (max == d/p && m < v) { //当价格一样时，挑容量最多的买，即使用不完 
				str = s;
				m = v;
			}
		}
		cout << str << endl;
	} 
	return 0;
}
