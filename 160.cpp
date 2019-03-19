#include<stdio.h>
typedef struct {
	char a[55];
	int sum;
} DNA;

//·µ»Ø³¤¶È
int length(char a[], int n); 

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	DNA s[m];
	for (int i = 0; i < m; i++) 
		scanf("%s", s[i].a);
	for (int i = 0; i < m; i++) 
		s[i].sum = length(s[i].a, n);
//	for (int i = 0; i < m-1; i++) {
//		for (int j = i+1; j < m; j++) 
//			if (s[i].sum > s[j].sum) {
//				DNA temp = s[i];
//				s[i] = s[j];
//				s[j] = temp;
//			}
//	}
	for (int i = 0; i < m-1; i++) 
		for (int j = 0; j < m-1-i; j++) 
			if (s[j].sum > s[j+1].sum) {
				DNA temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
	for (int i = 0; i < m; i++)
		printf("%s\n", s[i].a);
		
//	for (int i = 0; i < m; i++)
//		printf("%d\n", s[i].sum);
}

int length(char a[], int n) {
	int sum = 0;
	for (int i = 0; i < n-1; i++) 
		for (int j = i+1; j < n; j++) {
			if (a[i] > a[j])
				sum++;
		}
	return sum;
}
