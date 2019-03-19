/*
nyoj 664
分析:大数相除，大数取余 
*/

#include<iostream>
#include<string>
using namespace std;
const int numNote = 17;

int main() {
	string s;
	int ans;
	while (cin >> s, s!="0") {
		ans = 0;
		for (int i = 0; i < s.length(); i++) 
			ans = (ans*10+(s[i]-'0'))%numNote;
		if (ans == 0) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
} 
