#include<stdio.h>
#include<math.h>
int main() {
	char a[8], b[8];
	while (~scanf("%c", &a[0])) {
		for (int i = 1; i < 8; i++) scanf("%c", &a[i]);
		for (int i = 0; i < 8; i++) scanf("%c", &b[i]);
		float x1 = 0, y1 = 0, x2 = 0, y2 = 0;
		for (int i = 0; i < 8; i+=2) {
			//printf("a[i] = %c, b[i] = %c\n", a[i], b[i]);
			if (a[i] == 'E') x1++;
			else if (a[i] == 'N') y1++;
			else if (a[i] == 'W') x1--;
			else if (a[i] == 'S') y1--;
			if (b[i] == 'E') x2++;
			else if (b[i] == 'N') y2++;
			else if (b[i] == 'W') x2--;
			else if (b[i] == 'S') y2--;
		}
		//printf("x1=%.2f y1=%.2f x2=%.2f y2=%.2f\n", x1, y1, x2, y2);
		printf("%.2f\n", sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
	}
} 
