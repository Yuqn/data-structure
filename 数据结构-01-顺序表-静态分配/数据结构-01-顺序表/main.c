#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ������󳤶�
#define MaxSize 10 

// ����˳���ṹ��
typedef struct{
	int data[MaxSize]; // �����С
	int length; // ����
}SeqList; 

// ��ʼ��˳���
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
	SeqList L; // ����˳���
	InitList(&L); // ʵ����˳���

	printf("%s\n", "===========================");
	for (int j = 0; j < MaxSize; j++) {
		printf("%d\n", L.data[j]);
	}
	return 0;
}