#include<stdio.h>
//�ж������Σ���������֮�ʹ��ڵ����� 
int main() {
	int n, m;
	scanf("%d", &n);
	m = n;
	while (n--) {
		int x, y, z;
		scanf("%d%d%d", &x, &y, &z);
		if (x == y && x == z) {//���жϵȱ������� 
			printf("Case #%d:\nYE YE YE\n", m-n);
		}
		else {
			if (x+y>z && x+z>y && y+z>x) {
				if (x==y || x==z || y==z)//�жϵ��������� 
					printf("Case #%d:\nYE YE\n", m-n);
				else
					printf("Case #%d:\nYE\n", m-n); //�ж���ͨ������ 
			}
			else printf("Case #%d:\nNO\n", m-n); 
		}
	}
} 
