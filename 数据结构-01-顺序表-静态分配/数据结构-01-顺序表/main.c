#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 定义最大长度
#define MaxSize 10 

// 定义顺序表结构体
typedef struct{
	int data[MaxSize]; // 数组大小
	int length; // 长度
}SeqList; 

// 初始化顺序表
void InitList(SeqList *L) { 
	int i = 0;
	while (i<MaxSize)
	{
		L->data[i] = 0;
		i++;
	}
	L->length = 0;

	for (int j = 0; j < MaxSize; j++) {
		printf("%d\n", L->data[j]);
	}
}
int main() {
	SeqList L; // 创建顺序表
	InitList(&L); // 实例化顺序表

	printf("%s\n", "===========================");
	for (int j = 0; j < MaxSize; j++) {
		printf("%d\n", L.data[j]);
	}
	return 0;
}