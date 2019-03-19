#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int S_num(string s1, string s2) {
	int n = 0;
	for (int i = 0; i <= s2.length()-s1.length(); i++) 
		if (s1 == s2.substr(i, s1.length())) n++;
	return n;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		string s1, s2;
		cin >> s1 >> s2;
		cout << S_num(s1, s2) << endl;
	}
	return 0;
}
