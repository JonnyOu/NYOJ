#include<cstdio>
#include<iostream>
#include<map>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m, max, note;
		map<int, int> a;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &m);
			if (a.count(m)) a[m]++;
			else a[m] = 1;
		}
		map<int, int>::iterator iter = a.begin();
		note = iter->first; max = iter->second;	
		for (; iter != a.end(); iter++) { //注意遍历器的用法，給遍历器赋初始值，for循环括号后加分号 
			if (iter->second > max) {
				max = iter->second;
				note = iter->first;
			}
		}	
		printf("%d %d\n", note, max);
	}
	return 0;
} 
