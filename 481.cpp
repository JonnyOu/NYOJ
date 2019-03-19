#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//两边字符串相等
void C1(string s) {
	reverse(s.begin(), s.end());
	cout << s << endl;
}

//s1多于s2
void C2(string s, int n) {
	string::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++) {
		if (*iter <= 109) {
			s.erase(iter);
			iter--;
			n--;
		}
		if (!n) break;
	}
	C1(s);
} 

//s2多于s1
void C3(string s, int n) {
	string::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++) {
		if (*iter >= 110) {
			s.erase(iter);
			iter--;
			n--;
		}
		if (!n) break;
	}
	C1(s);
}

//s1为0
void C4(string s) {
	for (int i = 0; i < s.length()/2; i++) {
		s[i] = s[i]-13;
	}
	C1(s);
}

//s2为0
void C5(string s) {
	for (int i = 0; i < s.length()/2; i++) {
		s[i] = s[i]+13;
	}
	C1(s);
}

int main() {
	string s;
	while (cin >> s) {
		string s1, s2;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] <= 'm') s1 += s[i];
			else s2 += s[i];
		}
		if (s1.length() == s2.length()) C1(s);
		else if (s1.length() == 0 || s2.length() == 0) {
			if (s1.length() == 0) C4(s);
			else C5(s);
		}
		else {
			if (s1.length() > s2.length()) C2(s, s1.length()-s2.length());
			else C3(s, s2.length()-s1.length());
		}
  }
  return 0;
}	
