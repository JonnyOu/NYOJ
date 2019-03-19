//直接模拟最后一个球的路径  
#include<cstdio>
using namespace std;

int main() {
    int D, I;
    while (scanf("%d%d", &D, &I), D||I) {
          int k = 1;
          for (int i = 0; i < D-1; i++) //最后的小球到达每一层时计算是第几个到达该节点的球，奇数次向左走，偶数次向右走 
              if (I%2) { k = k*2; I = (I+1)/2; }
              else { k = k*2+1; I /= 2; }
          printf("%d\n", k);
    }    
    return 0;   
} 
