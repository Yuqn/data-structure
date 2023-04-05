#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// Ĭ����󳤶�
#define InitSize 10

// ����˳���ṹ
typedef struct {
	int* data;
	int MaxSize;
	int length;
}SeqList;

// ��ʼ��˳���
void InitList(SeqList* L) {
	// ���ٿռ�
	L->data = (int*)malloc(InitSize * sizeof(int));
	L->MaxSize = InitSize;
	L->length = 0;
}

// ��̬�������鳤��
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