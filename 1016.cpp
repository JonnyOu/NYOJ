//ֱ�߷���
#include<stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		float a,b,c,d,e,f,g,h,k1,k2,m1,m2,t;
		scanf("%f%f%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f, &g, &h);
		k1 = (d-b)/(c-a);
		k2 = (h-f)/(g-e);
		//printf("k1=%.f k2=%.f\n", k1, k2);
		if (k1 == k2) {
			if ((a>=e&&a<=g)||(a>=g&&a<=e)) printf("Interseetion\n");//���a�ڿ��ȿ����ϣ��ܹ�׷�� 
			else printf("Not Interseetion\n");
		}
		else {
			m1 = b-a*k1; m2 = f-e*k2; t = (m2-m1)/(k1-k2);
			//printf("m1=%.f,m2=%.f,t=%f\n", m1, m2, t);
			//printf("%f %f %f\n", m2-m1, k1-k2, (m2-m1)/(k1-k2));
			if (((t>=c&&t<=a)||(t>=a&&t<=c))&&((t>=e&&t<=g)||(t>=g&&t<=e))) printf("Interseetion\n");//�жϽ���������ֱ���� ע�⣡����������ȼ����� 
			else printf("Not Interseetion\n");
		}
	}
	return 0;
} 

