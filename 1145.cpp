/*
nyoj 1145
分析:由于go先拿，题目条件"清空其中一个箱子，然后分配礼物保证两个箱子都有礼物",
所以胜利条件是否有两个？一个是最终使箱子1 1，另一个是无法給两个箱子都分配礼物，也算输，
所以有起始1 1时go无法分配礼物，算输
那么 当输入两个数中只要有一个偶数，go先拿，另一个箱子的礼物，然后把偶数箱子分配成1 n-1
girl就必须拿清空礼物个数为1的箱子，然后分配礼物个数为n-1的箱子的礼物，由于n-1为奇数，所以分配后肯定是一奇一偶，
go重复上面操作，即可获胜 
*/

#include<iostream>
using namespace std;

int main() {
	int n,m;
	while (cin >> n >> m) {
		if (n%2 == 0 || m%2 == 0) 
			cout << "goshawk will treasure these gifts" << endl;
		else 
			cout << "girl will treasure these gifts" << endl;
	}
	return 0;
} 
