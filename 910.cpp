/*
nyoj 910
����:����set���ϵĲ��ظ��Ժ��Զ������Դ洢�ַ��� 
1.�������� set<?>iterator ��������� set<?>reverse_iterator
2.����Ԫ���ܸ��� setStr.size()  
*/ 
#include<iostream>
#include<set>
using namespace std;

int main() {
	set<string> setStr;
	string str;
	while (cin >> str) {
		setStr.insert(str);
	}
	set<string>::iterator it; 
	for (it = setStr.begin(); it != setStr.end(); it++) 
		cout << *it << ' ';
	cout << '\n' << setStr.size() << endl; 
	return 0;
}
 
