#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 设置队列最大数
#define MaxSize 10

// 创建顺序队列结构
typedef struct Queue {
	int data[MaxSize];
	int lest, next, size;
}Queue;

// 初始化队列，头出尾进
void InitQueue(Queue * Q) {
	Q->lest = 0;
	Q->next = 0;
	Q->size = 0;
}

// 进入队列（尾）
int Push(Queue* Q ,int num) {
	// 判断队列是否满了
	if (Q->size == MaxSize) {
		return -1;
	}
	Q->data[Q->next] = num;
	Q->size++;
	Q->next = (Q->next + 1) % MaxSize; // 变成循环队列
	return 0;
}

// 出队列（头）
int getQueue(Queue * Q) {
	// 判断队列是否为空
	if (Q->size == 0) {
		return -1;
	}
	// 出队列
	Q->size--;
	return Q->data[Q->lest++];
}

int main() {
	Queue Q;
	InitQueue(&Q);
	return 0;
}