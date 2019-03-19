//康托展开
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int a[12] = {39916800,3628800,362880,40320,5040,720,120,24,6,2,1,0};

int main() {
	int T, note, j, b[12]; //计算还有多少个数没再前面出现 
	long long sum;
	string s;
	scanf("%d", &T);
	while (T--) {
		sum = 1;
		cin >> s;
		memset(b, 0, sizeof(b));
		for (int i = 0; i < s.length()-1; i++) {
			b[s[i]-'a'] = 1;
			j = 0; note = 0;
			for (;;) {
				if (j == (s[i]-'a')) break;
				if (b[j] == 0) note++;
				j++;
			}
			sum += (note * a[i]);
		}
		printf("%lld\n", sum);	
	}
	return 0;
} 
