/*
nyoj 1125

一开始用嵌套循环做，发现超时，再发现答案不对，保留

分析: 暴力枚举 
*/

#include<iostream>
using namespace std;
const int maxSize = 30;

struct mMap {
	int vul;
	string c;
}mMap[maxSize]; 

void set() {
	mMap[0].c = "I";
	mMap[0].vul = 1;
	mMap[1].c = "II";
	mMap[1].vul = 2;
	mMap[2].c = "III";
	mMap[2].vul = 3;
	mMap[3].c = "IV";
	mMap[3].vul = 4;
	mMap[4].c = "V";
	mMap[4].vul = 5;
	mMap[5].c = "VI";
	mMap[5].vul = 6;
	mMap[6].c = "VII";
	mMap[6].vul = 7;
	mMap[7].c = "VIII";
	mMap[7].vul = 8;
	mMap[8].c = "IX";
	mMap[8].vul = 9;
	mMap[9].c = "X";
	mMap[9].vul = 10;
	mMap[10].c = "XX";
	mMap[10].vul = 20;
	mMap[11].c = "XXX";
	mMap[11].vul = 30;
	mMap[12].c = "XL";
	mMap[12].vul = 40;
	mMap[13].c = "L";
	mMap[13].vul = 50;
	mMap[14].c = "LX";
	mMap[14].vul = 60;
	mMap[15].c = "LXX";
	mMap[15].vul = 70;
	mMap[16].c = "LXXX";
	mMap[16].vul = 80;
	mMap[17].c = "XC";
	mMap[17].vul = 90;
	mMap[18].c = "C";
	mMap[18].vul = 100;
	mMap[19].c = "CC";
	mMap[19].vul = 200;
	mMap[20].c = "CCC";
	mMap[20].vul = 300;
	mMap[21].c = "CD";
	mMap[21].vul = 400;
	mMap[22].c = "D";
	mMap[22].vul = 500;	
	mMap[23].c = "DC";
	mMap[23].vul = 600;
	mMap[24].c = "DCC";
	mMap[24].vul = 700;
	mMap[25].c = "DCCC";
	mMap[25].vul = 800;
	mMap[26].c = "CM";
	mMap[26].vul = 900;
	mMap[27].c = "M";
	mMap[27].vul = 1000;
	mMap[28].c = "MM";
	mMap[28].vul = 2000;
	mMap[29].c = "MMM";
	mMap[29].vul = 3000;
}

int main() {
	int n;
	set();
	while (cin >> n) {
		string s;
		while (n > 0) {
			for (int i = 29; i >= 0; i--) {
				if (mMap[i].vul <= n) {
					s += mMap[i].c;
					n -= mMap[i].vul;
				}
			}
		}
		cout << s << endl;
	} 
	return 0;
}

//#include<iostream>
//#include<cstdio>
//#include<string>
//using namespace std;
//const int maxSize = 7;
//string s;
//
//struct mMap{
//	int vul;
//	char c;
//}mMap[maxSize];
//
//void set() {
//	mMap[0].c = 'I';
//	mMap[0].vul = 1;
//	mMap[1].c = 'V';
//	mMap[1].vul = 5;
//	mMap[2].c = 'X';
//	mMap[2].vul = 10;
//	mMap[3].c = 'L';
//	mMap[3].vul = 50;
//	mMap[4].c = 'C';
//	mMap[4].vul = 100;
//	mMap[5].c = 'D';
//	mMap[5].vul = 500;
//	mMap[6].c = 'M';
//	mMap[6].vul = 1000;
//}
//
///*
//判断要加入字符串的字符是否符合条件4 
//*/
//bool judge(char c, int i) {
//	if (c == s[i-1] && c == s[i-2] && c == s[i-3])
//		return false;
//	return true;
//}
//
//int main() {
//	set();
//	int n;
//	while (~scanf("%d", &n)) {
//		s = "";
//		for (;;) {
//			for (int j = maxSize-1; j >= 0; j--) {
//				if (mMap[j].vul <= n && judge(mMap[j].c, s.length())) { 
//					while (mMap[j].vul <= n && judge(mMap[j].c, s.length())) {
//						s += mMap[j].c;
//						n -= mMap[j].vul;
//					}
//					break;
//				}
//			}
//			if (n == 0) break;
//		}
//		cout << s << endl;
//	} 
//	return 0;
//}
