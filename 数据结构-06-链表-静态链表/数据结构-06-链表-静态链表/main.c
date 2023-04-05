#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 定义链表最大值
#define MaxSize 10

// 创建结构
typedef struct StaticList {
	int data;
	int next;
}StaticList[MaxSize];

// 初始化
void InitList(StaticList* L) {
	// 初始化时，只有一个节点，所以next为-1
	L[0]->next = -1;
}

int main() {
	StaticList L;
	InitList(&L);
	return 0;
}