#include<cstdio>
#include<cstring>
using namespace std;
const int MaxSize = 20;

int a[1<<MaxSize];

int main() {
    int D, I, n, k;
    while(scanf("%d%d", &D, &I), D||I) {
        n = (1<<D)-1;
        memset(a, 0, (n+1)*sizeof(int));
        for (int i = 0; i < I; i++) {
            k = 1;
            for (;;) {
                a[k] = !a[k];
                k = a[k] ? 2*k : 2*k+1;
               if (k > n) break;
            }
        }
        printf("%d\n", k/2);
    }
    return 0;   
}
S
