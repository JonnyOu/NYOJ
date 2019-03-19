#include<stdio.h>
int main() {
	float arr[12], sum = 0;
	
	for (int i = 0; i < 12; i++) {
		scanf("%f", &arr[i]);
		sum += arr[i];
	}
	sum /= 12;
	printf("%.2f\n", sum);
}
