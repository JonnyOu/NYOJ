/*
nyoj 285
����˼·��ͳ��ÿ���ַ����ĸ��������ݸ�����Ӧ�ĸ������ 
*/
#include<iostream>
#include<cstring>
#include<map>
using namespace std;
const int MaxSize = 20005;

map<string, int>M;
int t[MaxSize];

int main() {
	int a, b;
	while (cin >> a >> b, a||b) {
		string s;
		memset(t, 0, sizeof(t));
		for (int i = 0; i < a; i++) {
			cin >> s;
			if (!M.count(s)) M[s] = 1;
			else M[s]++;
		}
		map<string, int>::iterator it;
		for (it = M.begin(); it != M.end(); it++) 
			t[it->second]++;
		for (int i = 1; i <= a; i++) 
			cout << t[i] << endl;
		M.clear();
	}
	return 0;
}
