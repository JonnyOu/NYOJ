#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//·´×ªº¯Êý
int R(string s) {
	int sum = 0;
	for (int i = s.length()-1; i >= 0; i--)
		sum = sum*10+(s[i]-'0');  
	return sum;
}

int main() {
	string s;
	int note1, note2;
	while (cin >> s, s != "0+0=0") {
		note1 = s.find('+');
		note2 = s.find('=');
		if (R(s.substr(0,note1)) + R(s.substr(note1+1, note2-note1-1)) == R(s.substr(note2+1, s.length())))
			cout << "TRUE" << endl;
		else 
			cout << "FALSE" << endl;
	}
	return 0;
}
