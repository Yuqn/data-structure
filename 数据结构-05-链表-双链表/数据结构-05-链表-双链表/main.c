#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// ����˫����
typedef struct NodeList {
	int data;
	struct NodeList* lest;
	struct NodeList* next;
}NodeList;

// ��ʼ������(��ͷ����)
void InitList(NodeList * L) {
	// ���ٿռ�
	L = (NodeList*)malloc(sizeof(NodeList));
	if (L == NULL) {
		return -1;
	}
	L->lest = NULL;
	L->next = NULL;
}

// ��ĳ�ڵ�p֮�����s�ڵ㣬����ǰ��ָ��
int InsterList(NodeList* p,NodeList* s){
	
	if (p->next != NULL) {
		s->lest = p->next->lest;
		p->next->lest = s;
	}
	s->next = p->next;
	p->next = s;
	return 1;
}

// ɾ��ĳ�ڵ�p֮��Ľڵ�q
int DeleteList(NodeList* p,NodeList* q) {
	p->next = q->next;
	if (q->next != NULL) {
		q->next->lest = p;
	}
	// �ͷſռ�
	free(q);
	return 1;
}

int main() {
	NodeList L;
	InitList(&L);
	return 0;
}