#include<stdio.h>
#include<stdlib.h>
int true_ticket(int num);
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int x, y;
		scanf("%d%d", &x, &y);
		for (int i = x; i <= y; i++) {
			if (true_ticket(i)) {
				printf("%06d\n", i);
			}
		}
		printf("\n");
	}
}

int true_ticket(int num) {
	int str[6];
	for (int i = 5; i >= 0; i--) {
		str[i] = num%10;
		num /= 10;
	}
	if (str[0] > 6 || str[1] > 6 || str[2] > 6 || str[3] > 6 || str[4] > 6 || str[5] > 6) return 0;
	if (str[0] == str[1] && str[0] == str[2]) return 0;
	if (str[1] == str[2] && str[1] == str[3]) return 0;
	if (str[2] == str[3] && str[2] == str[4]) return 0;
	if (str[3] == str[4] && str[3] == str[5]) return 0;
	if (abs(str[0] - str[1]) > 4) return 0;
	if (abs(str[1] - str[2]) > 4) return 0;
	if (abs(str[2] - str[3]) > 4) return 0;
	if (abs(str[3] - str[4]) > 4) return 0;
	if (abs(str[4] - str[5]) > 4) return 0;
	return 1;	
}


