#include <stdio.h>  
#include <string.h>  
int a[10000];  
int dp[100000];  
int main()  
{  
    int ncase;  
    scanf("%d",&ncase);  
    while(ncase--)  
    {  
        int n,m;  
        memset(dp,false,sizeof(dp));  
        scanf("%d %d",&n,&m);  
        for(int i=0;i<n;i++)  
        scanf("%d",&a[i]);  
        int res=0;  
        dp[0]=1;  
        for(int i=0;i<n;i++)  
        {  
            for(int j=m;j>=a[i];j--)  
            {  
                if(dp[j-a[i]])  
                {  
                    dp[j]+=dp[j-a[i]];  
                }  
            }  
        }  
        printf("%d\n",dp[m]);  
    }  
    return 0;  
}     
