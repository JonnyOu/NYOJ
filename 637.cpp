/*
nyoj 637
windows�����£�c��c++��һ������ռ�����ַ� 
*/
#include<iostream>
using namespace std;

int main() {
	string s, t, a, b;
	while (cin >> s, s != "0") {
		for (int i = 0; i < s.length(); i++) {
			t = s.substr(i,3);
			if (t == "��") {
				a = s.substr(0, i); 
				b = s.substr(i+3, s.size());
				s = a+"��"+b; 
			} 
			else if (t == "��") {
				a = s.substr(0, i); 
				b = s.substr(i+3, s.size());
				s = a+"��"+b; 	
			}
		}
		cout << s << endl;
	}
	return 0;
}
