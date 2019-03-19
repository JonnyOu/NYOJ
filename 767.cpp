#include<stdio.h>
#include<math.h> 

//�ж�����
int prime(int n);

//�����Ӻ�
int sum(int n); 

int main() {
	int n, m;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		if (prime(m)) printf("Yes\n");
		else printf("No %d\n", sum(m));
	}
} 

int prime(int num) {
	//������С�����⴦�� 
	if (num == 2 || num == 3) return 1;
	//����6�ı������������һ����������
	if (num % 6 != 1 && num % 6 != 5 || num == 1) return 0;
	//��6�ı������������Ҳ��һ��������
	int temp = sqrt(num);
	for (int i = 5; i <= temp; i += 6) 
		if (num % i == 0 || num % (i+2) == 0)
			return 0;
	return 1;
}

int sum(int num) {
	int temp = sqrt(num), sum = 0;
	for (int i = 1; i <= temp; i++) 
		if (num % i == 0) {
			sum += i;
			if (i == (num / i)) break;
			sum += (num/i);
		}
//	if (num % temp == 0) sum += temp;
	return sum;
}




