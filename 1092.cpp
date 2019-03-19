/*
�ֲ��޸� 
1.����С������λ���֣�û��С������ӡ�.00��,��С������С��λ����2��
������λС�������Ҵ����λ���� 
2.����������ÿ��3�������һ������
3.�ж����� 
*/

#include<string>
#include<iostream>
using namespace std;

//��λ���� 
string JinWei(string s) {
	int i = s.size()-1;
	for (;;) {
		if ((s[0] != '-' && i == -1) || (s[0] == '-' && i == 0)) break;
		if (s[i] == '.') i--;
		if (s[i] != '9') {
			s[i] += 1; break;
		}
		s[i] = '0';
		i--;
	}
	if (s[0] != '-' && i == -1) {
		s.insert(0, "1");
	}
	else if (s[0] == '-' && i == 0) {
		s.insert(1, "1");
	}
	return s;
}

//����С�� 
string Decimal(string s) {
	size_t a = s.find('.');
	if (a == s.npos) { //û��С���� 
		s += ".00"; return s;
	}
	else {
		if (a+3 >= s.size()) {//�������λС�� 
			if (a+1+1 == s.size()) s = s + '0';
			return s;
		} 
		else { //����λС�������� 
			if (s[a+3] <= '4') { //û�н�λ 
				s = s.substr(0, a+2+1); return s;
			}
			else { //���ڽ�λ 
				s = JinWei(s.substr(0, a+2+1)); return s;
			} 
		}
	}
} 

//��������
string Integer(string s) {
	int k, i;
	if (s[0] == '-') k = 4;
	else k = 3;
	if (k == 4) { //ȥ��ǰ���0 
		for (i = 1; s[i] == '0' && s[i+1] != '.'; i++);
		s = s.substr(i, s.size());
		s = '-' + s;
	}
	else {
		for (i = 0; s[i] == '0' && s[i+1] != '.'; i++);
		s = s.substr(i, s.size());
	}
	size_t a = s.find('.');
	while (a > k) {
		a -= 3;
		s.insert(a, ",");
	}
	return s;
} 

//�ж�����
string Pm(string s) {
	if (s[0] == '-') {
		s = s.substr(1, s.size());
		s = '(' + s + ')';
	}
	return s;
} 

int main() {
	string s;
	while (cin >> s) {
		s = Decimal(s);
	//	cout << s << endl;
		s = Integer(s);
	//	cout << s << endl;
		s = Pm(s);
		cout << s << endl;
	}
	return 0;
}
