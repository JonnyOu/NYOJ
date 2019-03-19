#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;

int main() {
	string s;
	cin >> s;
	int len = s.length();
	cout << s << ' ' << len << endl;
	s.insert(2,"hello");
	cout << s << endl;
	reverse(s.begin(), s.end());
	cout << s << endl;
	string str = s.substr(1,3);
	cout << str << endl;
	cout << s.find("llo") << endl;
	return 0;
}
