#include<stdio.h>
int main()
{
	int n,m,k,s,ch[100000];
	while (~scanf("%d%d", &n,&m)) {
		s = 0;
		for (int i = 0; i < n; i++)
		scanf("%d", &ch[i]);
        for (int i = 0; i < n-1; i++) {
        	k = 0;
        	for (int j = i; j < n; j++) {
        		k += ch[j];
        		if (k == m) {
        			s++;
        			break;
        		}
        		if (k > m)//���ٲ���Ҫ��ѭ�� 
        		break;
        	}        	
        }
		printf("%d\n", s);
	}
} 
//����Ϊ���ⳤ�� 
//s=0Ҫ����ѭ�������һ��ѭ��������s�������¸�ֵ 
