/*
nyoj 359
����:�����ַ���s1 s2,�ҵ���ͬ���ַ���ɾ�����ַ�����¼λ��Ϊnote�����ʣ�µ�s1��s2��ͬ��������1���ַ�λ�ÿ�ɾ����
�ж�ʣ�µ�s���ж��ٸ������ı�ɾ�������ַ������ж����ֿ��ܼ�1���������0 
*/

#include<iostream>
#include<string> 
#include<algorithm>
using namespace std;
const int num = 1000005;
int a[num];

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s1,s2;
		int note,count = 0;
		char c;
		cin >> s1 >> s2;
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i]) {
				note = i;
				c = s1[note];
				break;
			} 
		}
		s1.erase(note,1); //ɾ�����ַ� 
		if (s1 == s2) {
			a[count++] = note+1;
			for (int i = note-1; i >= 0; i--) {
				if (s1[i] == c) {
					a[count++] = i+1;
				} 
				else break;
			}
		}
		if (count == 0) cout << 0 << endl;
		else {
			sort(a, a+count);
			cout << count << endl;
			for (int i = 0; i < count; i++) 
				cout << a[i] << ' ';
			cout << endl;
		}
	}
	return 0;
}
