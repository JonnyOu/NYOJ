/*
nyoj 925
������������ά���飬a[i][j], i = a, j = b, a[i][j] = t(tΪ�������������д���������ֵ)
���������������Ŷ����£�dfs�����Ƿ��������·����ͨ������ 
*/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxSize = 10001;
int a[maxSize][maxSize];
int b[maxSize]; //��ֹ�ظ����� 
int n, m;

bool concet(int t, int note) {
	b[t] = 1;
	if (a[t][note] != 0) return true;
	for (int i = 0; i < n; i++) {
		if (a[t][i] != 0 && b[i] == 0) {
			return concet(i, note);
		}
	}
	return false;
}

int main() {
	while (cin >> n >> m) {
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		int day[m], count = 0;
		for (int i = 0; i < m; i++) {
			int j, k, l;
			cin >> j >> k >> l;
			day[count++] = l;
			if (a[j][k] < l) {
				a[j][k] = l;
				a[k][j] = l;
			}
		}
		sort(day, day+count);
		int sum = 0;
//		for (int i = 0; i < count; i++) {
//			cout << day[i] << endl;
//		}
		for (int t = 0; t < count; t++) {
			int f[2*m], s = 0;
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					if (a[i][j] == day[t]) {
						a[i][j] = 0; a[j][i] = 0;
						f[s++] = i;
						f[s++] = j;
					//	cout << i << ' ' << j << endl;
					} 		
				}
			}
//			for (int i = 0; i < s; i++) {
//				cout << f[i] << ' ';
//			}
//			cout << endl;
			for (int i = 0; i < s; i+=2) {
				if (concet(f[i], f[i+1]) == false) {
					sum++;
			//		cout << f[i] << ' ' << f[i+1] << endl;
					break;
				} 
			}
		}
		cout << sum << endl;
	}
	return 0;
}


