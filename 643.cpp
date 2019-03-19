/*
nyoj 643
这个题目。。。就是数据题吧。。。 
*/

#include<iostream>
#include<string>
#include<cstdio>
#include<sstream> 
using namespace std;

string str[27] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", 
"5", "55", "555", "6", "66", "666", "7", "77", "777", "7777",
"8", "88", "888", "9", "99", "999", "9999"};

void chaStr(string s) {
	stringstream ss(s);
	string x;
	while (ss >> x) {
		if (x == "0") cout << " ";
		else {
			for (int i = 0; i <= 26; i++) {
				if (x == str[i]) {
					cout << (char)(i+'A');
				}
			}
		}
	}
	cout << endl;
}

void chaNum(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') cout << 0 << ' ';
		else {
			for (int j = 0; j <= 26; j++) {
				if (s[i]-'A' == j) {
					cout << str[j] << ' ';
					break;
				}
			}
		}
	}
	cout << endl;
}

int main() {
	string s;
	while (getline(cin, s)) {
		if (s[0] >= '0' && s[0] <= '9') chaStr(s);
		else chaNum(s);
	}
	return 0;
}
