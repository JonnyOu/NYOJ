/*
已知一个圆锥的表面积，求圆锥最大的体积，并求出底面积和高 
复制某位大神的论证过程，以表敬佩：
设母线长L，高H，底面半径R:
H2=L2-R2,
πR2+2πRL/2=a,
L=a/(πR)-R,
H2=[a/(πR)-R]2-R2=a2/(πR)2-2a/π,
V=πR2H/3
=πR2√[a2/(πR)2-2a/π]/3
令X=πR2，
V=X√[a2/(πX)-2a/π]/3
=√[a2X/π-2aX2/π]/3
=√[-2a(X2-aX/2+a2/16-a2/16)/π]/3
=√{[a3/8-2a(X-a/4)2]/π}/3
-2a(X-a/4)2<=0，-2a(X-a/4)2=0时，即X=a/4，V有最大值，
此时，πR2=a/4，R=√(aπ)/(2π). 
链接:https://zhidao.baidu.com/question/321959422.html?qbl=relate_question_0&word=%D6%AA%B5%C0%D4%B2%D7%B6%B5%C4%B1%ED%C3%E6%BB%FD%C8%E7%BA%CE%C7%F3%D7%EE%B4%F3%CC%E5%BB%FD 
*/

#include<cstdio>
#include<cmath>
using namespace std;
const double PI = 3.1415926;

int main() {
	double n;
	while (~scanf("%lf", &n)) {
		double R = sqrt(n * PI) / (2 * PI), H, V;
		H = sqrt(n*n/(PI*R*PI*R)-2*n/PI);
		V = sqrt(n*n*n/(8*PI))/3;
		printf("%.2lf %.2lf %.2lf\n", V, H, R);
	}
	return 0;
}
