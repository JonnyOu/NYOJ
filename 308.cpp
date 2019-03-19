#include<cstdio>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

/*
�ַ�������һ��������ַ��������ַ������ַ����Ļ��Ĵ��д���
1.�Ӵ��
2.�Ӵ��±���С


string::size_type : 
	string s.find("abc"),���s�д����ַ���"abc",�򷵻��Ӵ����±�,��������Ϊstring::size_type
string::npos : 
	string s.find("abc"),���s�в������ַ���"abc",�򷵻�string::npos
string s.substr(i, j) :
	��ȡ�±��i��ʼj���ȵ��ַ���,������ȳ���s,ϵͳ���ᱨ��������s��󳤶ȼ��� 
*/

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int max_size = 0, note = 0, len;	//max_size�жϴ��ĳ���, note�жϴ�����ĸ���±� 
		string s1, s2;
		cin >> s1;
		len = s1.size();	//��ȡs1�ĳ��� 
		s2 = s1;
		reverse(s2.begin(), s2.end());	//��תs2�ַ��� 
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
	

 
