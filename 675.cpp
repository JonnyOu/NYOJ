#include<cstdio>
#include<string>
#include<iostream>
#include<sstream>
using namespace std;

int main() {
	int n;
	while (~scanf("%d", &n)) {
		string rat, womchi, man, captain, name, status;
		for (int i = 0; i < n; i++) {
			cin >> name >> status;
			if (status == "rat") rat += name+" ";
			else if (status == "woman" || status == "child") womchi += name+" ";
			else if (status == "man") man += name+" ";
			else captain += name+"";
		}
		string s = rat+" "+womchi+" "+man+" "+captain, p;
		stringstream ss(s);
		while (ss >> p) cout << p << "\n";
	}
	return 0;
}
