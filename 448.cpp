/*
̰���㷨

���ݳ���Ϊlen,����len-m��
ÿ�β������ֵ������ֵ�����������len-m-iΪ������֤������ȡ 

*/

#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		string s, s1; 
		int len, m, note = 0, t = 0;
		char c;
		cin >> s >> m;
		len = s.size();
		for (int i = 1; i <= len-m; i++) {
			c = s[note];
			for (int j = note+1; j < len - (len-m-i); j++) {	//ʣ��len-m-iλ 
				if (s[j] > c) {
					c = s[j];
					t = j;
				}
			}
		//	cout << c << endl;
			s1 += c;
			note = (++t);
		}
		cout << s1 << endl;
	}
	return 0;
}
