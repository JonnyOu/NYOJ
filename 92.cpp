/*
nyoj 92
解题思路:建立两个数组，把符合的数据输入到初始值全为0的数组中
如何查找符合的数据？
一行中两堆0之间的数据即为符合的数据！ 
*/
#include<iostream>
#include<cstring>
using namespace std;
const int W = 1445;
const int H = 965;

int a[H][W],b[H][W]; 

int main() {
	int T;
	cin >> T;
	while (T--) {
		int l, w, k, t, flag;
		cin >> l >> w;
		memset(b, 0, sizeof(b));
		for (int i = 0; i < w; i ++) 
			for (int j = 0; j < l; j++)
				cin >> a[i][j];
		for (int i = 0; i < w; i++) {
			k = 0;
			flag = 0;
			cout << i << endl;
			for (;;) {
				if (a[i][k] == 0) {
					k++;
					for (;;) {
						if (k == l) break;
						if (a[i][k] != 0) {
							flag = 1; break;
						}
						k++;
					}
					
					if (flag == 1) {
						for (t = k+1; t < l; t++) 
							if (a[i][t] == 0) {
								flag = 2; break;
							}
					}
				} 
				if (flag == 2) {
					cout << k << ' ' << t << endl;
					for (int r = k; r < t; r++) 
						b[i][r] = a[i][r];
					break;
				}
				if (k == l) break;
				k++;
			}
		}
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < l; j++) 
				cout << b[i][j] << ' ';
			cout << endl;
		}
	} 
	return 0;
} 
