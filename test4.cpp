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
	vector<string>::iterator it;
	vector<string> a;
	a.push_back("123");
	a.push_back("234");
	a.push_back("345");
	a.push_back("456");
	it = a.begin();
	while (it != a.end()) {
		cout << *it << endl;
		it++;
	} 
	if (a.empty() == true) cout << 0 << endl;
	else cout << 1 << endl;
	a.pop_back();
	it = a.begin();
	while (it != a.end()) {
		cout << *it << endl;
		it++;
	} 	
	return 0;
}
