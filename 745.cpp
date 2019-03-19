/*
nyoj 745
分析: 最大子数组问题
 
*/ 

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
/*分治法*/ 
int findMaxCrossing(int arr[], int low, int mid, int high) {
	 int left_sum = INT_MIN, right_sum = INT_MIN, sum = 0;
	 for (int i = mid; i >= low; i--) {
	 	sum = sum + arr[i];
	 	if (sum > left_sum) {
	 		left_sum = sum;
	 	}
	 }
	 sum = 0;
	 for (int i = mid+1; i <= high; i++) {
	 	sum = sum + arr[i];
	 	if (sum > right_sum) {
	 		right_sum = sum;
	 	} 
	 }
	 return left_sum+right_sum;
}

int findMaximum(int arr[], int low, int high) {
	if (high == low) 
		return arr[low];
	else {
		int mid = (low+high)/2;
		int left_sum = findMaximum(arr, low, mid);
		int right_sum = findMaximum(arr, mid+1, high);
		int cross_sum = findMaxCrossing(arr, low, mid, high);
		if (left_sum >= right_sum && left_sum >= cross_sum) return left_sum;
		else if (right_sum >= left_sum && right_sum >= cross_sum) return right_sum;
		else return cross_sum;
	}
}

int main() {
	int T;
	while (cin >> T) {
		int a[T];
		for (int i = 0; i < T; i++) 
			cin >> a[i];
		cout << findMaximum(a, 0, T-1) << endl;
	}
	return 0;
}


