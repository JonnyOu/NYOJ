#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
    double x1,y1,x2,y2,m;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    m=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.2lf\n",m); 
	}
}
