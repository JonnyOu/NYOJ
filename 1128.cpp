/*
nyoj 1128 
*/

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
const int maxSize = 405;
int arr[maxSize];
int front, end;
bool flag;

/*
�ĸ��������� 
*/
void pushBegin(int c) {
	arr[front--] = c;
}

void pushEnd(int c) {
	arr[end++] = c;
}

void deleteBegin() {
	front++;
}

void deleteEnd() {
	end--;
}

void menu(int n) {
	int c;
	if (flag == true) {
		switch (n) {
			case 0: {
				cin >> c;
				pushBegin(c);
				break;
			}
			case 1: {
				cin >> c;
				pushEnd(c);
				break;
			}
			case 2: {
				if (front < end-1) //ע������ж���� 
					deleteBegin();
				break;
			}
			case 3: {
				if (front < end-1) 
					deleteEnd();
				break;
			}
			case 4: {
				flag = false;
				break;
			}
			default :{
				break;
			}
		}
	}
	else {
		switch (n) {
			case 0: {
				cin >> c;
				pushEnd(c);
				break;
			}
			case 1: {
				cin >> c;
				pushBegin(c);
				break;
			}
			case 2: {
				if (front < end-1)
					deleteEnd();
				break;
			}
			case 3: {
				if (front < end-1)
					deleteBegin();
				break;
			}
			case 4: {
				flag = true;
				break;
			}
			default :{
				break;
			}
		}
	}
}

int main() {
	int T, n, q;
	cin >> T;
	while (T--) {
		memset(arr, 0, sizeof(arr));
		front = 200;
		end = 201;
		flag = true;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> q;
			menu(q);
		}
		if (front == end-1) {
			cout << -1 << endl;
		}
		else {
			for (int i = front+1; i < end; i++) {
				cout << arr[i] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
