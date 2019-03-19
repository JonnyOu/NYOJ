//ด๓สýว๓ำเ 
#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	int b, sum;
	while (cin >> a >> b) {
		sum = 0;
		for (int i = 0; i < a.length(); i++) {
			sum = (sum*10+(a[i]-48)) % b;
		}
		cout << sum << endl;
	}
}
