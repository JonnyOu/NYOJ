#include<string>
#include<iostream>
using namespace std;

int main() {
	int T, n;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		n = 0;
		for (int i = 0; i < s.length(); i++) 
			n = n+(s[i]-'0');
		cout << n%9 << endl;
	}
	return 0;
}
