#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int a[12] = {39916800,3628800,362880,40320,5040,720,120,24,6,2,1,0};
int b[12];

int main() {
	string s;
	int T,note;
	long long sum;
	cin >> T;
	while (T--) {
		cin >> s;
		sum = 1;
		memset(b, 0, sizeof(b));
		for (int i = 0; i < s.length(); i++) {
			b[s[i]-'a'] = 1;
			note = 0;
			for (int j = 0; j < s[i]-'a'; j++) 
				if (b[j] == 0) note++;
			sum += note*a[i];
		}
		cout << sum << endl;
	} 
	return 0;
}
