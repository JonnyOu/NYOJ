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
	string str, s;
	getline(cin, s);
	stringstream ss(s);
	while (ss >> str) {
		cout << str << endl;
	}
	return 0;
}
