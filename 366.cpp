/*
ȫ���� 
�������� next_permutation
�������� prev_permutation
*/
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

string s = "123456789";

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		do {
			cout << s.substr(0,n) << endl;
		}while (prev_permutation(s.begin(), s.begin()+n));	//ȫ���� 
	}
}


