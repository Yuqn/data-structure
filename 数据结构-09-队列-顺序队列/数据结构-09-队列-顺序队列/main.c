#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ���ö��������
#define MaxSize 10

// ����˳����нṹ
typedef struct Queue {
	int data[MaxSize];
	int lest, next, size;
}Queue;

// ��ʼ�����У�ͷ��β��
void InitQueue(Queue * Q) {
	Q->lest = 0;
	Q->next = 0;
	Q->size = 0;
}

// ������У�β��
int Push(Queue* Q ,int num) {
	// �ж϶����Ƿ�����
	if (Q->size == MaxSize) {
		return -1;
	}
	Q->data[Q->next] = num;
	Q->size++;
	Q->next = (Q->next + 1) % MaxSize; // ���ѭ������
	return 0;
}

// �����У�ͷ��
int getQueue(Queue * Q) {
	// �ж϶����Ƿ�Ϊ��
	if (Q->size == 0) {
		return -1;
	}
	// ������
	Q->size--;
	return Q->data[Q->lest++];
}

int main() {
	Queue Q;
	InitQueue(&Q);
	return 0;
}