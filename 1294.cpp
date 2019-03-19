/*
1294. 
接替思路:读取一行输入一行，如果找到需要修改的字符串，返回该字符串的位置，npos为没找到该字符串的位置的值 
*/
#include<string>
#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	string line;
	while (getline(cin, line)) {
		for (;;) {
			ll apple = line.find("apple");
			if (apple != line.npos) 
				line.replace(apple, 5, "miss");
			else break;
		}
		for (;;) {
			ll banana = line.find("banana");
			if (banana != line.npos) 
				line.replace(banana, 6, "love");
			else break;
		}
		for (;;) {
			ll orange = line.find("orange");
			if (orange != line.npos) 
				line.replace(orange, 6, "kiss");
			else break;
		}
		cout << line << endl;
	}
	return 0;
}
