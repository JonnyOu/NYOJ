#include <bits/stdc++.h>
using namespace std;

int main() {
	stringstream ss;
	string s = "sdfssd f sdf sfd sdf sadf af sd";
	string str;
	ss << s;
	while (ss >> str)
		cout << str << endl;
	
	return 0;
}
