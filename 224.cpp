#include<stdio.h>
int main()
{
    int n, m, k, x = 0, ch[100001] = {0};
    char p[7];
    scanf("%d%d", &n, &m);
    getchar();
    for (int i = 1; i <= m; i++) {
    	scanf("%s", p);
    	if (p[0] == 'C') { 
    		scanf("%d", &k);
    		if (ch[k] == 0) {
    			ch[k] = 1;
    			x++;
    		}
    		else {
    			ch[k] = 0;//ֱ�Ӵ�ch��k��������ж��ж��ٵ����� 
    			x--;
    		}
    	}
    	else {
    		printf("%d\n", x);
    	}
    }
}

