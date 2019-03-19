#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n--) {
		int x, y, m = 0, ch[300];
		scanf("%d%d", &x, &y);
		for (int i = 0; i < y; i++)
		scanf("%d", &ch[i]);
		sort(ch,ch+y);
		for (int i = y-1; i > -1; i--) {
			if (ch[i] != 0)
			for (int j = i-1; j > -1; j--) {
				if (ch[j] != 0)
				if (ch[i] + ch[j] <= x) {
					m++;
					ch[j] = 0; ch[i] = 0;
					break; 
				}
			}
		}
		for (int i = 0; i < y; i++)
		if (ch[i] != 0)
		m++;
		printf("%d\n", m);
	}
}
