//Õ¨”‡∂®¿Ì 
#include<string>
#include<cstdio>
#include<iostream>
using namespace std;

int main() {
	int T, sum;
	string s;
	scanf("%d",&T);
	while (T--) {
		cin >> s;
		sum = 0;
		for (int i = 0; i < s.length(); i++) 
			sum = (sum*10+s[i]-'0')%10003;
		printf("%d\n", sum);
	}
	return 0;
}
