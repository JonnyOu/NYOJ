/*
nyoj 752
分析:按照回文串的性质，当轮到这个选手时，他面对的字符串没有字符的个数是奇数时，
它就能拿走任意一个字符，剩下的字符串经过整理能得到回文串
问题继续简化，当先手第一次面对的字符串中有偶数种字符个数是奇数  或 一种字符个数是奇数 
他就能赢  
*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int a[27];

int main() {
	string s;
	int sum;
	while (cin >> s) {
		sum = 0;
		memset(a, 0, sizeof(a));
		for (int i = 0; i < s.length(); i++) {
			a[s[i]-'a']++;
		}
		for (int i = 0; i <= 26; i++)
			if (a[i] % 2) sum++;
	//	cout << sum << endl;
		if (sum == 1) {
			cout << "Yes" << endl;
			continue;
		} 
		if (sum%2) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
} 
