#include<cstdio>

int main() {
	long long n, s, m; 
	while (~scanf("%lld", &n)) {
		m = 1; s = 1;
		while (m != 0) {
			m = m*10+1;
			m = m%n;
			s++;
		}
		printf("%lld\n", s);
	}	
	return 0;
}

