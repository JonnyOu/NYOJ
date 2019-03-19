#include<string>
#include<iostream>
using namespace std;

int main() {
	int T, k;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		k = 0;
		for (int i = 0; i < s.length(); i++) {
			k = k*10+(s[i]-'0');
			k = k%9;
		}
		cout << k << endl;
	}
	return 0;
}        

