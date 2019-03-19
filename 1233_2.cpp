#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;

//×Ö·û´®°´×ÖµäÐòÅÅÐò 
bool cmp(string a, string b) {
	if (a.length() != b.length()) return a.length() < b.length();
	else {
		for (int i = 0; i < a.length(); i++) {
			if (a[i] != b[i]) 
				return a[i] < b[i];
		}
	}
}

//Á½¸ö×Ö·û´®Ïà¼õ
void  Jian(string minNum, string maxNum) {
	int answer[minNum.length()], t;
	for (int i = minNum.length()-1; i >= 0; i--) {
		if (minNum[i] > maxNum[i]) {
			answer[i] = maxNum[i]+10-minNum[i];
			t = i-1;
			while (maxNum[t] == '0') {
				maxNum[t] = '9';
			}
			maxNum[t]--;
		}
		else answer[i] = maxNum[i]-minNum[i];
	}
	for (int i = 0; i < minNum.length(); i++) {
		printf("%d", answer[i]);
	}
	puts("");
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		string arrStr[n], minNum = "", maxNum = "";
		for (int i = 0; i < n; i++) {
			cin >> arrStr[i];
		}
		sort(arrStr, arrStr+n, cmp);
		for (int i = 0; i < n; i++) {
			minNum = minNum+arrStr[i];
			maxNum = arrStr[i]+maxNum;
		}
		Jian(minNum,maxNum);
	}
	return 0;
}
