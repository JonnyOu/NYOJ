/*
810.
����˼·��
wa 
1����С����������Ϊa�Ӻ�b�� 
2������a�ӣ�����ż��λԪ�ش�b����Ѱ�Ҵ��ڸ�Ԫ�ص���Сֵ��
����λԪ�ش�b����Ѱ��С�ڸ�Ԫ�ص����ֵ��ƥ��ɹ���Ԫ����Ϊ0

ac
��Ӯ��ֵ��N��һ�룬����Ӯ 
http://blog.csdn.net/yuzhiwei1995/article/details/45445787

*/

//#include<cstdio>
//#include<algorithm> 
//using namespace std;
//
//int main() {
//	int n;
//	while (~scanf("%d", &n)) {
//		int a[n], b[n], sum = 0;
//		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//		for (int i = 0; i < n; i++) scanf("%d", &b[i]);
//		sort(a, a+n); 
//		sort(b, b+n);
//		for (int i = 0; i < n; i++) {
//			if (i % 2 == 0) {
//				for (int j = 0; j < n; j++) {
//					if (b[j] != 0 && b[j] > a[i]) {
//						sum++;
//						b[j] = 0;
//						break;
//					}
//				}
//			}
//			else {
//				for (int j = 0; j < n; j++) {
//					if (b[j] != 0 && b[j] < a[i]) {
//						sum--;
//						b[j] = 0;
//						break;
//					}
//				}
//			}
//		}
//		if (sum == 0) printf("YES\n");
//		else printf("NO\n");
//	}
//	return 0;
//}


#include<iostream>
#include<algorithm>
using namespace std;
const int num = 105;

int main() {
	int a[num],b[num],n,cnt;
	while (cin >> n) {
		for (int i = 1; i <= n; i++) 
			cin >> a[i];
		for (int i = 1; i <= n; i++)
			cin >> b[i];
		sort(a+1, a+n+1);
		sort(b+1, b+n+1);
		if (n%2 == 1) {
			cout << "NO" << endl;
			continue;
		}
		cnt = 0;
		for (int i = 1; i <= n/2; i++) {
			if (a[i] > b[n/2+i]) cnt++;
			if (a[n/2+i] > b[i]) cnt++;
		}
		if (cnt == n/2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
} 
