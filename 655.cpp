/*
nyoj 655
斐波那契数列大数版 
*/
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
string s[210];
//大数相加
string XJ(string s1, string s2) { //使传过来的字符串s2长度大于等于s1 
	int length = s1.length(), p = 0, i;
	for (i = 0; i < length; i++) {
		if (s2[i]+s1[i]+p-'0'-'0' > 9) {
			s2[i] = s2[i]+s1[i]+p-'0'-'0'-10+'0';
			p = 1;
		}
		else {
			s2[i] = s2[i]+s1[i]+p-'0'-'0'+'0';
			p = 0;
		}
	}
	if (p == 1) {
		while (s2[i] == '9' && i < s2.length()) {
			s2[i] = '0';
			i++;
		}
		if (i == s2.length()) {
			s2 = s2 + '1';
		}
		else s2[i]++;
	}
	return s2;
} 

void F() {
	s[1] = "1"; s[2] = "2"; s[3] = "3";
	for (int i = 3; i <= 205; i++) 
		s[i] = XJ(s[i-2], s[i-1]);
}

int main() {
	F();
	int T;
	cin >> T;
	while (T--) {
		string t;
		cin >> t;
		string ss = s[t.length()];
		reverse(ss.begin(), ss.end());
		cout << ss << endl;
	}
	return 0;
}

