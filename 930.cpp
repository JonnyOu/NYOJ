/*
nyoj 930
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

/*
大数相加 
*/
string add(string s) {
	string str = s;
	int len = s.length();
	reverse(str.begin(), str.end());
	char c = 0;
	for (int i = len-1; i >= 0; i--) {
		c = s[i]-'0'+str[i]+c;
		if (c > '9') {
			s[i] = c-10;
			c = 1;
		}
		else {
			s[i] = c;
			c = 0;
		}
	}
	if (c == 1) {
		s = "1"+s;
	}
	return s;
} 

/*
判断回文串 
*/
bool isPa(string s) {
	int len = s.length()-1, j = s.length()-1;
	len /= 2;
	for (int i = 0; i <= len; i++) {
		if (s[i] != s[j]) {
			return false;
		}
		j--;
	}
	return true;
}

int main() {
	string s, str;
	int t;
	while (cin >> s) {
		t = 0;
		str = "";
		while (!isPa(s)) {
			str += s+"--->";
			s = add(s);
			t++;
		} 
		cout << t << '\n' <<str << s << endl;
	}
	return 0;
}
