//由于最终输出全字母和全数字，设置两个数组存储字母和数字 
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	getchar();
	while (n--) {
		char str[1001], ptr[1001] = {0}, ktr[1001] = {0};
		int p = 0, k = 0;//记录字符串长度 
		
		scanf("%s", str);
		
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] <= 'z' && str[i] >= 'a')
				ptr[p++] = str[i];
			if (str[i] <= '9' && str[i] >= '0')
				ktr[k++] = str[i];
		}
		
		if (p == 0) printf("0\n");
		else {
			printf("%d ", p);
			for (int i = p-1; i >= 0; i--) //倒序输出 
			printf("%c", ptr[i]);
			printf("\n");	
		}
		
		if (k == 0) printf("0\n");
		else {
			printf("%d ", k);
			sort(ktr, ktr+k);
			for (int i = k-1; i >= 0; i--)
				printf("%c", ktr[i]);
				printf("\n");
		}
	}
}
