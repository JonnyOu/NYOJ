#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
const int N = 305;

int main() {
	string s;
	while (getline(cin, s), s != "#") {
		long sum = 0;
		for (int i = 0; i < s.length(); i++) 
			if (s[i] != ' ') 
				sum += (s[i]-64)*(i+1);
		printf("%ld\n", sum);
	}
	return 0;
}
