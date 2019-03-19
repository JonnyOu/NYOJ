#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int MaxSize = 1010;
//求字符串与反转字符串最长公共序列,字符串长度-最长公共序列 scl
int maxLen[MaxSize][MaxSize] = {0};
int Str(string s) {
	string s2 = s.substr(0,s.length());
	reverse(s.begin(), s.end());
	for (int i = 0; i < s.length(); i++)
		for (int j = 0; j < s2.length(); j++) {
			if (s[i] == s2[j]) 
				maxLen[i+1][j+1] = maxLen[i][j] + 1;
			else 
				maxLen[i+1][j+1] = maxLen[i][j+1]>maxLen[i+1][j]?maxLen[i][j+1]:maxLen[i+1][j];
		}
		return s.length()-maxLen[s.length()][s2.length()];	
}

int main() {
	int T, t;
	string s;
	cin >> T;
	while (T--) {
		cin >> s;
		cout << Str(s) << endl;
	}
	return 0;
}
