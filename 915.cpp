#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main() {
	string s1, s2;
	int n;
	bool flag;
	while (cin >> s1 >> s2) {
		n = 0;
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i]) {
				flag = false;
				for (int j = i+1; j < s1.length(); j++) {
					if (s1[j] == s2[i]) {
						char temp = s1[j];
						s1[j] = s1[i];
						s1[i] = temp;
						n += (j-i);
						flag = true;
						break;
					}
				}
			}
			if (flag = false) {	//����һ��û�н��н����������-1��ƥ�䲻�ɹ� 
				n = -1;
				break;
			}
		}
		if (n == 0) cout << -1 << endl;
		else	cout << n << endl;
	}
} 
