#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
int prime(int n);
int main() {
	int n;
	scanf("%d", &n);
	while(n--) {
		char str[101];//×Ö·û´® 
		int num[26] = {0}, maxn, minn;
		
		scanf("%s", str);
		
		for (int i = 0; i < strlen(str); i++) 
			num[str[i]-'a']++;
		
		sort(num, num+26);
		maxn = num[25];
		for (int i = 0; i < 26; i++) {
			if (num[i] != 0) {
				minn = num[i];
				break;
			}
		}
		
//		printf("%d %d\n", maxn, minn);
		if (prime(maxn-minn)) printf("Lucky Word\n%d\n", maxn-minn);
		else printf("No Answer\n0\n");		
	}
} 

int prime(int n) {
	if (n == 0 || n == 1) return 0;
	for (int i = 2; i <= sqrt(n); i++) 
		if (n % i == 0) return 0;
	return 1;
}
