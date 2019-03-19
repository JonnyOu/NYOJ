//×Ö·û´®ÅÅÐò 
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int cmp1(const void *a,const void*b){  
    char *s1=(char *)a;  
    char *s2=(char *)b;  
    return strcmp(s1,s2);  
}

int main() {
	int n;
	scanf("%d", &n);
	char a[n][11], animal[11];
	for (int i = 0; i < n; i++) 
		scanf("%s", a[i]);
	//×Ö·û´®ÅÅÐò 
	qsort(a,n,sizeof(char)*11,cmp1); 
//	for (int i = 0; i < n-1; i++) 
//		for (int j = i+1; j < n; j++)
//			if (strcmp(a[i], a[j]) > 0) {
//				char temp[11];
//				strcpy(temp, a[i]);
//				strcpy(a[i], a[j]);
//				strcpy(a[j], temp);
//			}
	int count = 1, max = 1;
	strcpy(animal, a[0]);
	for (int i = 1; i < n; i++) {
		if (!strcmp(a[i], a[i-1])) count++;
		else count = 1;
		if (max < count) {
			max = count;
			if (strcmp(animal, a[i]))
				strcpy(animal, a[i]);
		}
	}
	printf("%s %d\n", animal, max);	
}
