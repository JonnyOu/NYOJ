#include<stdio.h>
#include<math.h>

//进制转换函数

//10进制转换为16进制 
void hexadecimal(int n);

//10进制转换为8进制
int octal(int n);

int main() {
	char x;
	while (~scanf("%c", &x)) {
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		getchar();
		if (x == 'X') {
			for (int i = 0; i < n; i++) {
				hexadecimal(a[i]);
			}			
		}
		else {
			for (int i = 0; i < n; i++) {
				printf("% 4d ", octal(a[i]));
			}
		}
		printf("\n");
	}
}

//10转8 
int octal(int n) {
	int num = 0, count = 0;
	while (n != 0) {
		num += (n%8)*pow(10,count);
		count++;
		n /= 8;
	} 
	return num;
}

//10转16 
void hexadecimal(int n) {
	char a[20], k;
	int count = 0;
	if (n == 0) {
		a[count] = '0';
		count++;
	}
	else {
		while (n != 0) {
		if (n % 16 == 10) a[count] = 'A';
		else if (n % 16 == 11) a[count] = 'B';
		else if (n % 16 == 12) a[count] = 'C';
		else if (n % 16 == 13) a[count] = 'D';
		else if (n % 16 == 14) a[count] = 'E';
		else if (n % 16 == 15) a[count] = 'F';
		else a[count] = n%16+48;
		count++;
		n /= 16;
		}
	}
	for (int i = count; i < 4; i++) 
		printf(" "); 
	for (int i = count-1; i >= 0; i--) 
		printf("%c", a[i]);
	printf(" ");
}
