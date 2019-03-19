#include<cstdio>
using namespace std;

int main() {
	int n;
	while (~scanf("%d", &n)) {
		int a[n], sum = 0, note = 0, flag = 0;
		for (int i = 0; i < n; i++)	{
			scanf("%d", &a[i]);
			sum += a[i];
		} 
		if (sum%n) flag = 1;
		int avg = sum / n;
		for (int i = 0; i < n; i++) {
			if (a[i] > avg) {
				if ((a[i]-avg)%2 == 0) note += (a[i]-avg)/2;
				else flag = 1;
			}
			else if ((avg-a[i])%2) flag = 1;
		}
		if (flag) printf("-1\n");
		else printf("%d\n", note);
	}
	return 0;
}
