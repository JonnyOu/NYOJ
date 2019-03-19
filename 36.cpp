#include<iostream>
#include<string>
using namespace std;
const int MaxSize = 1010;

int a[MaxSize][MaxSize] = {0};

int LCS(string s1, string s2) {
	int size1 = s1.size(), size2 = s2.size();
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (s1[i] == s2[j]) a[i+1][j+1] = a[i][j]+1;
			else a[i+1][j+1] = a[i][j+1]>a[i+1][j]?a[i][j+1]:a[i+1][j];
		}
	}
	for (int i = 0; i <= size1; i++) {
		for (int j = 0; j <= size2; j++) 
			cout << a[i][j] << ' ';
		cout << endl;
	}	
	return a[size1][size2];
}  
  
int main() {
	int T;
	cin >> T;
	while (T--) {
		string s1, s2;
		cin >> s1 >> s2;
		cout << LCS(s1, s2) << endl;
	}
	return 0;
} 

