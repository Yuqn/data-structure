#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// ������ʽջ�ṹ��������
typedef struct StackList {
	int data;
	struct StackList* next;
}StackList;

// ʵ������ʽջͷ���
void InitStackList(StackList* L) {
	// ���ٿռ䣬��Lָ��
	L = (StackList*)malloc(sizeof(StackList));
	L->next = NULL;
}

// ��ջ��������ͷ���֮��
int Push(StackList* S, StackList* L) {
	// �޸�ָ��ָ��
	L->next = S->next;
	S->next = L;
	return 1;
}

// ��ջ����
StackList* getStackList(StackList* S) {
	// ���ֻ��ͷ��㣬���ջʧ��
	if (S->next = -1) {
		return NULL;
	}
	return ++S;
}

int main() {
	return 0;
}