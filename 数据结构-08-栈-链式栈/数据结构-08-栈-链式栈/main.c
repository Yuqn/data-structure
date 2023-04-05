#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 创建链式栈结构（单链）
typedef struct StackList {
	int data;
	struct StackList* next;
}StackList;

// 实例化链式栈头结点
void InitStackList(StackList* L) {
	// 开辟空间，让L指向
	L = (StackList*)malloc(sizeof(StackList));
	L->next = NULL;
}

// 入栈操作，在头结点之后
int Push(StackList* S, StackList* L) {
	// 修改指针指向
	L->next = S->next;
	S->next = L;
	return 1;
}

// 出栈操作
StackList* getStackList(StackList* S) {
	// 如果只有头结点，则出栈失败
	if (S->next = -1) {
		return NULL;
	}
	return ++S;
}

int main() {
	return 0;
}