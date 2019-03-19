/**
以下介绍c，c++库函数的应用 
**/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<map> 
using namespace std;
const int maxSize = 10000;

typedef struct Node { //结构体，自定义新的类型，数据结构基本构成元素 
	int num; 
}Node;

bool cmp(Node a, Node b) { //头文件algorithm, 用于自定义排序，如下规则为按从大到小排序，sort调用 
	return a.num > b.num;
}

int main() {
/*********************c**************************/ 
	char arr[maxSize], brr[maxSize];
	strcpy(arr, "lkfjasldfjsdlfkjsdf"); //strcpy函数，给c语言字符串赋值，或者复制，后者拷贝到前者 
	printf("%s\n", arr); 
	strcpy(brr, arr);
	puts(brr); //输出字符串 
	if (strcmp(arr, brr)) { //比较字符串是否相同，返回0相同，1不同 
		cout << 0 << endl;
	}
	else {
		cout << 1 << endl;
	}
	
	
	memset(arr, 0, sizeof(arr)); //头文件cstring, 给数组赋初始值 
/***********************c++**********************/ 
	Node a[maxSize];
	for (int i = 0; i < 10; i++) 
		scanf("%d", a[i].num); 
	sort(a, a+n, cmp); //sort调用自定义cmp排序 
/*********************map************************/
	map<string, int> mapT;
	string mapStr = "123";
	if (mapT.count(mapStr)) a[mapStr]++; //寻找mapT集合中是否有这个字符串 
	else 
		a[mapStr] = 1;	
	
	return 0;
}
