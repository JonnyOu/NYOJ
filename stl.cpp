/**
���½���c��c++�⺯����Ӧ�� 
**/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<map> 
using namespace std;
const int maxSize = 10000;

typedef struct Node { //�ṹ�壬�Զ����µ����ͣ����ݽṹ��������Ԫ�� 
	int num; 
}Node;

bool cmp(Node a, Node b) { //ͷ�ļ�algorithm, �����Զ����������¹���Ϊ���Ӵ�С����sort���� 
	return a.num > b.num;
}

int main() {
/*********************c**************************/ 
	char arr[maxSize], brr[maxSize];
	strcpy(arr, "lkfjasldfjsdlfkjsdf"); //strcpy��������c�����ַ�����ֵ�����߸��ƣ����߿�����ǰ�� 
	printf("%s\n", arr); 
	strcpy(brr, arr);
	puts(brr); //����ַ��� 
	if (strcmp(arr, brr)) { //�Ƚ��ַ����Ƿ���ͬ������0��ͬ��1��ͬ 
		cout << 0 << endl;
	}
	else {
		cout << 1 << endl;
	}
	
	
	memset(arr, 0, sizeof(arr)); //ͷ�ļ�cstring, �����鸳��ʼֵ 
/***********************c++**********************/ 
	Node a[maxSize];
	for (int i = 0; i < 10; i++) 
		scanf("%d", a[i].num); 
	sort(a, a+n, cmp); //sort�����Զ���cmp���� 
/*********************map************************/
	map<string, int> mapT;
	string mapStr = "123";
	if (mapT.count(mapStr)) a[mapStr]++; //Ѱ��mapT�������Ƿ�������ַ��� 
	else 
		a[mapStr] = 1;	
	
	return 0;
}
