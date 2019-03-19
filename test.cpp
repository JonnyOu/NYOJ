#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;

typedef struct Node {
	int num;
	int data;
}Node;

bool cmp(Node a, Node b) {
	return a.data < b.data;
}

int main() {
	int a[10] = {1,4,2,3,0,8,6,5,7,9};
	sort(a, a+10);
	for (int i = 0; i < 10; i++) 
		cout << a[i] << ' ';
	cout << endl;
	
	Node nodeArr[10];
	for (int i = 0; i < 10; i++) {
		nodeArr[i].num = i+1;
		cin >> nodeArr[i].data;
	}
	sort(nodeArr, nodeArr+10, cmp);
	for (int i = 0; i < 10; i++) 
		cout << nodeArr[i].data << ' ';
	cout << endl;
	return 0;
}
