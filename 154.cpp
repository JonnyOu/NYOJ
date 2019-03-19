#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m,a[15],s,min,x;
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		scanf("%d",&a[i]);
		for(int i=0;i<m;i++)
		{
			min=a[i];
			x=i;
			for(int j=i;j<m;j++)
			{
				if(min>a[j]){
				min=a[j];
				x=j;
				}
				else continue;
			}
			a[x]=a[i];
			a[i]=min;
		}
		if(m%2==1){
			s=(m+1)/2;
			printf("%d\n",a[s-1]);
		}
		else{
			s=(m+2)/2;
			printf("%d\n",a[s-1]);
		}
	}
}
	
	

