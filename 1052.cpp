#include<stdio.h>
#include<algorithm>
using namespace std;
int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int n, sum = 2;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    sort(a, a+n);
    int j = 0, k = n-1;
    for (int i = 0; i < n; i++) 
      if (i%2==0) b[j++] = a[i];
      else b[k--] = a[i];
//    for (int i = 0; i < n; i++)
//      printf("%d ", b[i]); 
    for (int i = 1; i < n/2; i++)
      if (b[i] > b[i-1]) sum++;
    for (int i = n/2; i < n-1; i++)
      if (b[i] > b[i+1]) sum++;
    printf("%d\n", sum);
  }
}

