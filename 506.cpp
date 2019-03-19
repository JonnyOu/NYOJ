//包含数字四的储存柜都不存在
#include<stdio.h>
#include<math.h>
int four(int n);
int main()
{
	int n,m,m1,s,sum,t,tag;
	while (~scanf("%d", &n)) {
		m = n; m1 = n; s = 0; sum = 0; tag = 0;
		while (n >= 10) {
			n /= 10;
			s++;
		}
		while (s>0) {
			t = pow(10,s);
			m %= t*10;
			if (m != 0) {
			if (m/t < 4) 
			sum += four(s) * (m/t);
			else if (m/t == 4)
			sum += four(s) * (m/t) + 1;
			else
			sum += four(s) * (m/t-1) + t;
			if (m/t == 4) {
				sum += m % t;
				tag = 1;
				break;	
			}
			s--;	
			}
			else
			break;
		}
		if (tag == 0 && m1 % 10 > 4)
		sum++;
		printf("%d\n", m1-sum);
	}
}

int four(int n) 
{
	if (n == 4) return 3439;//10000中4的个数 
	if (n == 3) return 271;//1000中4的个数 
	if (n == 2) return 19;//100中4的个数 
	if (n == 1) return 1;
}










