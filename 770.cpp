#include<stdio.h>
#include<string.h>
#define num 50
int main() {
	char str[num];
	int k1, k2, note;
	while (~scanf("%s%d%d", str, &k1, &k2)) {
		for (int i = 0; i < strlen(str); i++) {
			note = str[i]-'A';
			while(1) {
//				if (note - k2 < 0) note += 26; 
				if ((note-k2)%k1==0 && note >= k2) break;//�ύ5�Σ����ڲ���� note >= k2 
				note += 26;								// ����Ҫ���� k1*m�ض���������note-k2 = k1*m����ԭ�⣩������note�����k2 
			}
			printf("%c", (note-k2)/k1+'A');
		}
		printf("\n");
	}
} 
