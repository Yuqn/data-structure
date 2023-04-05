#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 创建链式结构
typedef struct Queue {
	int data;
	Queue* next;
}Queue;

// 创建两个指针指向队列头尾
typedef struct QueueP
{
	Queue* lest;
	Queue* tail;
}QueueP;

// 实例化，包含头结点
void InitQueue(QueueP * Q) {
	// 开辟空间存储头结点
	Q = (Queue*)malloc(sizeof(Queue));
	// 两个指针都指向头部
	Q->lest->next = NULL;
}

int main() {
	return 0;
}