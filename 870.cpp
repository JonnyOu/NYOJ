/*
870.
wa
����˼·:����set���ϣ��г�ʼֵ��Ԫ�طŽ��������棬ÿ���ж�һ����䣬�����ܱ���ֵ���ӽ�������������� 

����ط�������û����ֵ��ֵ��ֵ���Ϊû�и�ֵ��
����Ϊ�Ľ��Ĵ��� 
*/ 
#include<cstdio>
#include<set>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n), n != -1) {
		set<char> a;
		string s;
		a.insert('a');
		set<char>::iterator iter;
		for (int i = 0; i < n; i++) {
			cin >> s;
			for (iter = a.begin(); iter != a.end(); iter++) {
			if (s[2] == *iter) {
				a.insert(s[0]);
				break;
				}
			}
		}
		if (a.size() == 1) {
			printf("none\n");
			continue;
		}
		for (iter = a.begin(); iter != a.end(); iter++) 
			printf("%c ", *iter);
		printf("\n");
	}
	return 0;
}
