//1代表10，A代表1
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		getchar();
		string s1, s2;
		char c;
		int n, m;
		scanf("%c", &c);
		cin >> s1 >> s2;
		if (s1[0] == 'A') n = 1;
		else if (s1[0] == '1') n = 10;
		else if (s1[0] == 'J') n = 11;
		else if (s1[0] == 'Q') n = 12;
		else if (s1[0] == 'K') n = 13;
		else n = s1[0]-'0';
		if (s2[0] == 'A') m = 1;
		else if (s2[0] == '1') m = 10;
		else if (s2[0] == 'J') m = 11;
		else if (s2[0] == 'Q') m = 12;
		else if (s2[0] == 'K') m = 13;
		else m = s2[0]-'0';
		if (s1[s1.size()-1] == c && s2[s2.size()-1] != c) printf("YES\n");
		else if (s1[s1.size()-1] != c && s2[s2.size()-1] == c) printf("NO\n");
		else if (n > m) printf("YES\n");
		else printf("NO\n"); 
	}
	return 0;
} 
