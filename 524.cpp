/*
524.
����˼·:�ַ����������бȽ�
��δ���
1.���۴�ͷ����������������������
2.������������ǰ������0
3.�����С���㣬����С�����������0 

�������: +0 == -0 
*/

#include<string>
#include<iostream>
using namespace std;

//�ж�����С���� 
bool havePoint(string s) {
	for (int i = 0; i < s.size(); i++) 
		if (s[i] == '.') return true;
	return false;
}

//�����ַ��� 
string deal(string s) {
	if (havePoint(s)) {
		int t = s.size();
		for (;;) {
			if (s[--t] != '0') break;
		}
		if (s[t] == '.') s = s.substr(0, t);
		else s = s.substr(0, t+1);
	}
	if(s[0] == '+') {  
		int ans = 1, i;
		for (i = 1; i+1 != s.size() && s[i] == '0'; i++) ans++;
   	s = s.substr(ans, s.size());
  }  
  else if(s[0] == '-') {  
		int ans = 0, i;
		for (i = 1; i+1 != s.size() && s[i] == '0'; i++) ans++;
		s = '-'+s.substr(ans+1, s.size());
		if (s[0] == '-' && s[1] == '0') s = "0";
	}  
  else {  
		int ans = 0, i;
		for (i = 0; i+1 != s.size() && s[i] == '0'; i++) ans++;
		s = s.substr(ans, s.size());
  }  
//	cout << s << endl;
	return s;

} 

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		string ss1 = deal(s1), ss2 = deal(s2);
		if (ss1 == ss2)
			cout << "YES" << endl;
		else cout << "NO" << endl;
		cout << endl;
	}
	return 0;
}
