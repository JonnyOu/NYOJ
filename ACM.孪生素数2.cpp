#include<iostream> 
#include<cmath>
#include<iomanip>
using namespace std;
bool a[1000000];
int main()
{
	int i,j;
	for (i = 2; i < 1000000; i++)
	a[i] = true;
	double s = sqrt(1000000);
	for (i = 2; i <= s; i++)
	if(a[i])
	for (j = i * i; j < 1000000; j += i)
	a[j] =  false;
	int n;
	cin >> n;
	while(n--)
	{
		int m, sum = 0;
		cin >> m;
		if(m > 2) ++sum;
		for (i = 3; i < m - 1; i++)
		if(a[i] && a[i+2])
		++sum;
		cout << sum << endl; 
	}
}
