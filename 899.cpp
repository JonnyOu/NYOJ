/*
��֪һ��Բ׶�ı��������Բ׶��������������������͸� 
����ĳλ�������֤���̣��Ա��壺
��ĸ�߳�L����H������뾶R:
H2=L2-R2,
��R2+2��RL/2=a,
L=a/(��R)-R,
H2=[a/(��R)-R]2-R2=a2/(��R)2-2a/��,
V=��R2H/3
=��R2��[a2/(��R)2-2a/��]/3
��X=��R2��
V=X��[a2/(��X)-2a/��]/3
=��[a2X/��-2aX2/��]/3
=��[-2a(X2-aX/2+a2/16-a2/16)/��]/3
=��{[a3/8-2a(X-a/4)2]/��}/3
-2a(X-a/4)2<=0��-2a(X-a/4)2=0ʱ����X=a/4��V�����ֵ��
��ʱ����R2=a/4��R=��(a��)/(2��). 
����:https://zhidao.baidu.com/question/321959422.html?qbl=relate_question_0&word=%D6%AA%B5%C0%D4%B2%D7%B6%B5%C4%B1%ED%C3%E6%BB%FD%C8%E7%BA%CE%C7%F3%D7%EE%B4%F3%CC%E5%BB%FD 
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
