#include<cstdio>
#include<iostream>
#include<map>
using namespace std;

char Change(char c) {
	if (c >= 'A' && c <= 'C') return '2';
	else if (c >= 'D' && c <= 'F') return '3';
	else if (c >= 'G' && c <= 'I') return '4';
	else if (c >= 'J' && c <= 'L') return '5';
	else if (c >= 'M' && c <= 'O') return '6';
	else if (c == 'P' || c == 'R' || c == 'S') return '7';
	else if (c >= 'T' && c <= 'V') return '8';
	else if (c >= 'W' && c <= 'Y') return '9';
}

int main() {
	int n;
	scanf("%d", &n);
	string s, t;
	map<string, int> a;
	for (int i = 0; i < n; i++) {
		t = "";
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (t.size() == 3) t += '-';
			if (s[i] >= '0' && s[i] <= '9') t += s[i];
			else if (s[i] >= 'A' && s[i] <= 'Y' && s[i] != 'Q') {
				t += Change(s[i]);
			}
		} 
		//�ж�map�������Ƿ���stringΪt�ģ�û�У��½�stringΪt��Ԫ�ز����ӽ����ϣ�����ӳ��ֵΪ1��̫ǿ�� 
		if (!a.count(t)) a[t] = 1;
		else a[t]++;
	}
	//����
	map<string, int>::iterator iter;
	for (iter = a.begin(); iter != a.end(); iter++) {
		if (iter->second != 1) 
			cout << iter->first << ' ' << iter->second << endl; 
	}
	return 0;
}
