/*
nyoj 835
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	bool flag;
	while (cin >> s) {
		flag = true;
		for (int i = 0; i < s.length(); i++) {
			if ((i%5==0 && s[i]!='C') || (i%5==1 && s[i]!='A') || 
			(i%5==3 && s[i]!='E') || ((i%5==2 || i%5==4) && s[i]!='m')) {
				flag = false; break;
			}
		}
		if (flag == true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
