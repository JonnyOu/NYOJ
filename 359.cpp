/*
nyoj 359
分析:输入字符串s1 s2,找到不同的字符，删除该字符，记录位置为note，如果剩下的s1与s2相同，则先有1个字符位置可删除，
判断剩下的s中有多少个连续的被删除掉的字符，即有多少种可能加1，否则输出0 
*/

#include<iostream>
#include<string> 
#include<algorithm>
using namespace std;
const int num = 1000005;
int a[num];

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s1,s2;
		int note,count = 0;
		char c;
		cin >> s1 >> s2;
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i]) {
				note = i;
				c = s1[note];
				break;
			} 
		}
		s1.erase(note,1); //删除该字符 
		if (s1 == s2) {
			a[count++] = note+1;
			for (int i = note-1; i >= 0; i--) {
				if (s1[i] == c) {
					a[count++] = i+1;
				} 
				else break;
			}
		}
		if (count == 0) cout << 0 << endl;
		else {
			sort(a, a+count);
			cout << count << endl;
			for (int i = 0; i < count; i++) 
				cout << a[i] << ' ';
			cout << endl;
		}
	}
	return 0;
}
