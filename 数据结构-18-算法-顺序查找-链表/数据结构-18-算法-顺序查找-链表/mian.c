#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// ��������ṹ������ʹ�ð���ͷ���ĵ�����
typedef struct List {
	// �ڵ�����
	int data;
	// ָ��
	struct List* next;
}List;

// ʵ��������
void InitList(List* L) {
	// ���ٿռ䣬��Žڵ�
	L = (List*)malloc(sizeof(List));
	// �ж��Ƿ��е�ַָ��L
	if (L == NULL) { return ; }
	// ��ʼ������ͷ���βָ��ָ��գ������Լ���
	L->next = NULL;
}

// �����㷨
int getList(List* L, int num) {
	// ����
	int i = 1;
	// ����ͷ�ڵ�
	L = L->next;
	// ����ÿһ���ڵ�
	while (L->next != NULL) {
		if (L->data == num) {
			return i;
		}
		L = L->next;
		i++;
	}
	return -1;
}

int main() {
	List L;
	InitList(&L);
	return 0;
}