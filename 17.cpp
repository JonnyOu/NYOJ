/*
17.¶¯Ì¬¹æ»® 

*/

#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		string s;
		cin >> s;
		int n = s.size(), a[n], x;
		bool flag;
		memset(a, 0, n*sizeof(int));
		a[0] = 1;
		for (int i = 1; i < n; i++) {
			x = 0; flag = false;
			for (int j = 0; j < i; j++) {
				if (s[j] < s[i] && a[j] >= a[x]) {
					flag = true;
					x = j;
				}
			}
			if (flag == true) {
				a[i] = a[x] + 1;
			}
			else a[i] = 1;
		}
		x = 0;
		for (int i = 0; i < n; i++) 
			if (a[i] > a[x]) x = i;
		cout << a[x] << endl;
	}
	return 0;
}
