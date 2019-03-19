#include<string>
#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main() {
	int n;
	char note = '1';
	string s;
	map<string, int> a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (!a.count(s)) {
			cout << "OK" << endl;
			a[s] = 1;
		}
		else {
			cout << s << a[s]++ << endl;
		}
	}
	return 0;
} 
