/*
nyoj 303
����Ϊ�һ�˵���˺þö�û˼·�𣿲����ܣ�����ˣ������ڵģ�����
����:10������26����֮���ת����ֻ��26���Ƶı�ʾ������ͬ 
*/ 

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
char c[26] = 
{ //ע��z������ǰ�� 
'Z','A','B','C','D','E','F','G','H',
'I','J','K','L','M','N','O','P','Q',
'R','S','T','U','V','W','X','Y'
};

string change_26(int n) {
	string s = "";
	while (n != 0) {
		s	= c[n%26]+s;
		if (n%26 != 0) n /= 26; //�˴���ʱ��֪��ô���ͣ�ʵ��ó�����Ϊ��26���ý�1�����˴���z��ʾ 
		else {
			n /= 26; n--;
		}
	}
	return s;
}

int change_10(string s) {
	int n = 0, t = 1;
	for (int i = s.length()-1; i >= 0; i--) {
		n += (t*(s[i]-'A'+1));
		t *= 26;
	}
	return n;
}

int main() {
	int T;
	string s;
	cin >> T;
	while (T--) {
		cin >> s;
		if (s[0] >= 'A' && s[0] <= 'Z') {
			cout << change_10(s) << endl;
		}
		else {
			int t = 0;
			for (int i = 0; i < s.length(); i++) {
				t = t*10+(s[i]-'0');
			}
 			cout << change_26(t) << endl;
		}	
	}
	return 0;
}
