/*
nyoj 752
����:���ջ��Ĵ������ʣ����ֵ����ѡ��ʱ������Ե��ַ���û���ַ��ĸ���������ʱ��
��������������һ���ַ���ʣ�µ��ַ������������ܵõ����Ĵ�
��������򻯣������ֵ�һ����Ե��ַ�������ż�����ַ�����������  �� һ���ַ����������� 
������Ӯ  
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
