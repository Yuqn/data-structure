#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// �����������ֵ
#define MaxSize 10

// �����ṹ
typedef struct StaticList {
	int data;
	int next;
}StaticList[MaxSize];

// ��ʼ��
void InitList(StaticList* L) {
	// ��ʼ��ʱ��ֻ��һ���ڵ㣬����nextΪ-1
	L[0]->next = -1;
}

int main() {
	StaticList L;
	InitList(&L);
	return 0;
}