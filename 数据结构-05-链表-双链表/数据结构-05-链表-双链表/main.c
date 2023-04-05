#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 创建双链表
typedef struct NodeList {
	int data;
	struct NodeList* lest;
	struct NodeList* next;
}NodeList;

// 初始化链表(带头链表)
void InitList(NodeList * L) {
	// 开辟空间
	L = (NodeList*)malloc(sizeof(NodeList));
	if (L == NULL) {
		return -1;
	}
	L->lest = NULL;
	L->next = NULL;
}

// 在某节点p之后插入s节点，交换前后指针
int InsterList(NodeList* p,NodeList* s){
	
	if (p->next != NULL) {
		s->lest = p->next->lest;
		p->next->lest = s;
	}
	s->next = p->next;
	p->next = s;
	return 1;
}

// 删除某节点p之后的节点q
int DeleteList(NodeList* p,NodeList* q) {
	p->next = q->next;
	if (q->next != NULL) {
		q->next->lest = p;
	}
	// 释放空间
	free(q);
	return 1;
}

int main() {
	NodeList L;
	InitList(&L);
	return 0;
}