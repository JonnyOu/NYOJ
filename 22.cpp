#include<stdio.h>
#include<math.h>
int prime(int number);
int main() {
	int n, num, sum, number;
	scanf("%d", &n);
	while (n--) {
		sum = 0;
		scanf("%d", &num);
		for (int i = 0; i < num; i++) { 
			scanf("%d", &number);
			if (prime(number)) 
				sum += number;
		}
		printf("%d\n", sum); 
	}
}

int prime(int number) {
	int tag = 1;
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) 
			tag = 0;
	}
	if (tag == 1 && number != 1) return 1;
	return 0;
}
