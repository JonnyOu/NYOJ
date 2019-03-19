/*
nyoj 793
*/

#include<iostream>
using namespace std;

int main() {
	int n,num;
	bool flag;
	while (cin >> n) {
		flag = false;
		for (int i = 0; i < n; i++) {
			cin >> num;
			if (num == i) flag = true;
		}
		if (flag == true) cout << "Yes" << endl;
		else cout << "No" << endl;
	} 
	return 0;
}
