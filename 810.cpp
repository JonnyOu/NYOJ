/*
810.
解题思路：
wa 
1、由小到大排序，设为a队和b队 
2、遍历a队，假设偶数位元素从b队中寻找大于该元素的最小值，
奇数位元素从b队中寻找小于该元素的最大值，匹配成功的元素设为0

ac
当赢的值是N的一半，裁判赢 
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
