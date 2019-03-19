/*
����˼·:
ÿ�����Ӷ���һ��ջ���ж�ÿ��ָ��Ƿ�Ϸ�
����ж�?
a ����ջ��Ԫ��x��ջ
b ������ջ����b����Ϊ�ջ���ջ��Ԫ�ش���x���ɹ�ջ�����򣬽����ж� 
*/
#include<stack>
#include<iostream>
#include<cstdio>
using namespace std;
stack<int> s[4];

bool F(int a, int b) {
	int note;
	if (s[a].empty()) return false;
	else note = s[a].top();
 	if (s[b].empty() || s[b].top() > note) {
		s[a].pop(); s[b].push(note);
		return true;
	}
	return false;
}

//���ջԪ��
void clear(stack<int> *a) {
	while (!a->empty()) a->pop();
} 

int main() {
	int T;
	cin >> T;
	while (T--) {
		clear(&s[1]); clear(&s[2]); clear(&s[3]);
		int P, Q, a, b, note;
		bool flag = true;
		scanf("%d%d", &P, &Q);
		for (int i = 0; i < P; i++) s[1].push(P-i);
		for (int i = 0; i < Q; i++) {
			scanf("%d%d", &a, &b);
			if (F(a, b) == false) {
				flag = false; 
				break;
			} 
		}
		if (flag == false) cout << "illegal" << endl;
		else cout << "legal" << endl; 
	}
	return 0;
}
