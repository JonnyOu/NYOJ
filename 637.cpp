/*
nyoj 637
windows环境下，c和c++中一个汉子占两个字符 
*/
#include<iostream>
using namespace std;

int main() {
	string s, t, a, b;
	while (cin >> s, s != "0") {
		for (int i = 0; i < s.length(); i++) {
			t = s.substr(i,3);
			if (t == "我") {
				a = s.substr(0, i); 
				b = s.substr(i+3, s.size());
				s = a+"你"+b; 
			} 
			else if (t == "你") {
				a = s.substr(0, i); 
				b = s.substr(i+3, s.size());
				s = a+"我"+b; 	
			}
		}
		cout << s << endl;
	}
	return 0;
}
