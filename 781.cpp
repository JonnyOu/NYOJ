/*
nyoj 781
*/

#include<iostream>
#include<cstring>
using namespace std;
const int maxSize = 50;
int a[maxSize], count;

bool isHuiwen() {
//	for (int i = 0; i < count; i++) 
//		cout << a[i] << ' ';
//	cout << endl;
	int length = count/2;
	for (int i = 0; i < length; i++) 
		if (a[i] != a[count-1-i]) 
			return false;
	return true;
}

bool fun(int num, int n) { //发送数字和进制 
	memset(a, 0, sizeof(a));
	count = 0;
	while (num != 0) {
		a[count++] = num % n;
		num /= n;
	}
	if (isHuiwen())	return true;
	return false;
}

int main() {
	int n;
	while (cin >> n, n) {
		int t[17] = {0}, sum = 0;
		for (int i = 2; i <= 16; i++)  
			if (fun(n,i)) {
				t[sum++] = i;
			}
		if (sum == 0) {
			cout << "number " << n << " is not a palindrom" << endl;
		}
		else {
			cout << "number " << n << " is palindrom in basis ";
			for (int i = 0; i < sum; i++) 
				cout << t[i] << ' ';
			cout << endl;
		}
	}
	return 0;
}
