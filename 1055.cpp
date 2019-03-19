#include<stdio.h>
#include<string.h>
#define maxn 1000005
int main() {
  char s[maxn];
  while (~scanf("%s", s)) {
    int len = strlen(s);
    if (s[len-1] != '0') {
      for (int i = 0; i < len-1; i++)
        printf("%c", s[i]);
      printf("%c\n", s[len-1]-1);
    }
    else {            
      int k = len-2;
      for (;;) 
        if (s[k] != '0') break;
        else k--;
      if (k != 0) {
        for (int i = 0; i < k; i++)
          printf("%c", s[i]);
        printf("%c", s[k]-1);
        for (int i = k+1; i < len; i++)
          printf("9");
        printf("\n");
      }
      else {
        for (int i = 0; i < len-1; i++) 
          printf("9");
        printf("\n");  
      }
    }  
  }
}

