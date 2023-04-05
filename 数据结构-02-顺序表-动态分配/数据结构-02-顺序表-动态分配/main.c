#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 默认最大长度
#define InitSize 10

// 创建顺序表结构
typedef struct {
	int* data;
	int MaxSize;
	int length;
}SeqList;

// 初始化顺序表
void InitList(SeqList* L) {
	// 开辟空间
	L->data = (int*)malloc(InitSize * sizeof(int));
	L->MaxSize = InitSize;
	L->length = 0;
}

// 动态增加数组长度
void IncreaseSize(SeqList* L, int len) {
	int* p = L->data;
	L->data = (int*)malloc((L->MaxSize + len) * sizeof(int));
	for (int i = 0; i < L->length; i++) {
		L->data[i] = p[i];
	}
	L->MaxSize = L->MaxSize + len;
	L->length = 0;
	free(p);
	p = NULL;
}

int main() {
	SeqList L;
	InitList(&L);
	IncreaseSize(&L, 5);
	printf("%d",L.MaxSize);
	return 0;
}