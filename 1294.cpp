/*
1294. 
����˼·:��ȡһ������һ�У�����ҵ���Ҫ�޸ĵ��ַ��������ظ��ַ�����λ�ã�nposΪû�ҵ����ַ�����λ�õ�ֵ 
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
