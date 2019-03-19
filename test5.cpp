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
	set<string> a;
	a.insert("123");
	a.insert("234");
	a.insert("345");
	a.insert("123");
	set<string>::iterator it = a.begin();
	while (it != a.end()) {
		cout << *it << endl;
		it++;
	}
	int n = a.count("123");
	if (n == 1) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}
