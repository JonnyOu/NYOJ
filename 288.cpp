#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

string s[10][3] = {{" _ ","| |","|_|"},{"   ", "  |", "  |"},{" _ ", " _|", "|_ "},{" _ ", " _|", " _|"},{"   ", "|_|", "  |"},
									 {" _ ", "|_ ", " _|"},{" _ ", "|_ ", "|_|"},{" _ ", "  |", "  |"},{" _ ", "|_|", "|_|"},{" _ ", "|_|", " _|"}};

int main() {
	int a, b, c, d;
	while (~scanf("%d%d%d%d", &a, &b, &c, &d)) {
		for (int i = 0; i < 3; i++) {
			cout << s[a][i] << s[b][i] << s[c][i] << s[d][i] << endl; 
		}
	}
	return 0;
}

