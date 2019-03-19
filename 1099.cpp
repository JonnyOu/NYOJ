/*
nyoj 1099
����:�жϸ��������ĸ����Ƿ�������һ�������Σ��ж�һ���㵽����������ľ��룬�ض��������ߺ�һ���Խ��� 
ע��:�ĸ��㲻һ����˳������������߶���ȿ�����ƽ���ı��Σ�������ظ������������� 
*/

#include<iostream>
#include<cmath>
using namespace std;

double des(int x1, int y1, int x2, int y2) {
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2); 
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int a[4][2];
		bool flag = true;
		double diagonal = 0, side;
		for (int i = 0; i < 4; i++) {
			cin >> a[i][0] >> a[i][1];
		}
		side = des(a[0][0],a[0][1],a[1][0],a[1][1]); //Ѱ�ұ߳��ͶԽ��߳����벻�����õķ����� 
		for (int i = 2; i < 4; i++) {
			int temp = des(a[0][0],a[0][1],a[i][0],a[i][1]); 
			if (side < temp) {diagonal = temp;}
			else if (side > temp) {
				diagonal = side;
				side = temp;
			}
			if (diagonal > side) break; 
		}
		if (side == 0 || diagonal == 0) { //!!!
			cout << "No" << endl;
			continue;
		}
	//	cout << side << ' ' << diagonal << endl;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j != i && j < 4; j++) {
				double temp = des(a[i][0],a[i][1],a[j][0],a[j][1]);
				if (temp != side && temp != diagonal) {
					flag = false;
				//	cout << i << ' ' << j << ' ' << temp << endl;
					break;
				}
			}
			if (flag == false) break;
		}
		if (flag == true) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
} 
