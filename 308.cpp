#include<cstdio>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

/*
字符串中找一个最长的子字符串，子字符串在字符串的回文串中存在
1.子串最长
2.子串下标最小


string::size_type : 
	string s.find("abc"),如果s中存在字符串"abc",则返回子串的下标,返回类型为string::size_type
string::npos : 
	string s.find("abc"),如果s中不存在字符串"abc",则返回string::npos
string s.substr(i, j) :
	获取下标从i开始j长度的字符串,如果长度超出s,系统不会报错，而是以s最大长度计算 
*/

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int max_size = 0, note = 0, len;	//max_size判断串的长度, note判断串首字母的下标 
		string s1, s2;
		cin >> s1;
		len = s1.size();	//获取s1的长度 
		s2 = s1;
		reverse(s2.begin(), s2.end());	//反转s2字符串 
		for (int i = 0; i < len; i++) {
			for (int j = 1; j+i <= len; j++) {
				string::size_type pos = s2.find(s1.substr(i,j));
				if (pos != string::npos && j > max_size) {
					max_size = j;
					note = i;
				}
			}
		}
		cout << s1.substr(note, max_size) << endl;
	}
	return 0;
}
	

 
