#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// ������ʽ�ṹ
typedef struct Queue {
	int data;
	Queue* next;
}Queue;

// ��������ָ��ָ�����ͷβ
typedef struct QueueP
{
	Queue* lest;
	Queue* tail;
}QueueP;

// ʵ����������ͷ���
void InitQueue(QueueP * Q) {
	// ���ٿռ�洢ͷ���
	Q = (Queue*)malloc(sizeof(Queue));
	// ����ָ�붼ָ��ͷ��
	Q->lest->next = NULL;
}

int main() {
	return 0;
}