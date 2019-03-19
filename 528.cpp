#include<cstdio>
#include<map>
#include<iostream>
using namespace std;

int main() {
	int n;
	while (~scanf("%d", &n)) {
		map<int , int>a;
		int m;
		while (n != 0) {
			scanf("%d", &m);
			if (!a.count(m)) a[m] = 1;
			else a[m]++;
			n--;
		}
		map<int , int>::iterator iter;
		for (iter = a.begin(); iter != a.end(); iter++) 
			if ((iter->second) % 2 == 1) {
				printf("%d\n", iter->first);
				break;
			}		
	}
	return 0;
}
 
