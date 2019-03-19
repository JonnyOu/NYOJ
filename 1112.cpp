#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, sum = 0;
		string s, ss;
		map<string, int> a;
		cin >> n >> s;
		for (int i = 0; i < s.length()-n+1; i++) {
			ss = s.substr(i, n);
			if (a.count(ss)) a[ss]++;
			else a[ss] = 0;
		}
		map<string, int>::iterator iter;
		for (iter = a.begin(); iter != a.end(); iter++) sum += iter->second; //遍历器的使用 
		cout << sum << endl;
	}
}
