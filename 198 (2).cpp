#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--) {
		char ch[1001], number[1001], m;
	    scanf("%s", number);
	    m = strlen(number);
		for (int i = 0; i < m; i++) {
			switch (number[i]){
				case '0':
				case '1':{ch[i] = 'O';break;}
				case '2':
				case '3':{ch[i] = 'T';break;}
				case '4':
		        case '5':{ch[i] = 'F';break;}
		        case '6':
		        case '7':{ch[i] = 'S';break;}
		        case '8':{ch[i] = 'E';break;}
		        default :ch[i] = 'N';
			}
		}
		for (int i = m-1; i > -1; i--)
		printf("%c", ch[i]);
		printf("\n");
	}
}
