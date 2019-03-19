#include<stdio.h>
#include<string.h>
typedef struct Pro {
	int t;
	char ID;
	char AW[10];	
	int note;
} Pro;

//字符数组去重排序函数 
void sort(char *a, int n);

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int m, count1 = 0, count2 = 0, p;
		scanf("%d", &m);
		Pro a[m]; 
		char k1[m], k2[m];
		for (int i = 0; i < m; i++) {
			scanf("%d", &a[i].t);
			getchar();
			scanf("%c", &a[i].ID);
			scanf("%s", a[i].AW);
			a[i].note = 0;
			if (!strcmp(a[i].AW, "Accept")) a[i].note = 1;
		}
		for (int i = 0; i < m; i++) {
			if (a[i].note == 1) {
				k1[count1] = a[i].ID;
				count1++;
			}
		}
		for (int i = 0; i < m; i++) {
			p = 1;
			for (int j = 0; j < count1; j++) {
				if (a[i].ID == k1[j]) {
					p = 0;
					break;
				}
			}
			if (p == 1) {
					k2[count2] = a[i].ID;
					count2++;
			}
		}
		sort(k1, count1);
		sort(k2, count2);
		printf("Accept: ");
		for (int i = 0; i < count1; i++) {
			if (k1[i] == 'a') break;
				printf("%c", k1[i]);
		}		
		printf("\n");
		printf("Wrong: ");
		for (int i = 0; i < count2; i++) {
			if (k2[i] == 'a') break;
				printf("%c", k2[i]);
		}
		printf("\n");
//		for (int i = 0; i < m; i++) {
//			if (a[i].note == 1) {
//				printf("%d ", i);
//			}
//		}
	}
}

void sort(char *a, int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] == a[j] && a[i] != 'a') {
				a[i] = 'a';
				char temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else if (a[i] > a[j]) {
				char temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}







