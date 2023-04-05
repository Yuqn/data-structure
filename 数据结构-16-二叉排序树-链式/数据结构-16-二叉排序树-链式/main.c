#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// �����������ṹ
typedef struct Tree {
	int data;
	struct Tree* ltree, * rtree;
}Tree;

// ��ʼ��
void InitTree(Tree* T) {
	T = (Tree*)malloc(sizeof(Tree));
	if (T == NULL) {
		return -1;
	}
	T->data = 0;
	T->ltree = NULL;
	T->rtree = NULL;
}

// ���ң�������������ڵ㶼�Ǳ��ҽڵ�С
Tree* getTree(Tree* T,int data) {
	while (T != NULL && T->data != data)
	{
		if (data < T->data) {
			T = T->ltree;
		}
		else
		{
			T = T->rtree;
		}
	}
	return T;
}

// ����
int addTree(Tree* T,int data) {
	// ����ڵ�
	if (T == NULL) {
		// ���ٿռ�
		T = (Tree*)malloc(sizeof(Tree));
		if (T == NULL) { return -1; }
		T->data = data;
		T->ltree = T->rtree = NULL;
		return 1;
	}
	// �Ƚϣ����С�ڽڵ㣬�������
	if (data < T->data) {
		return  addTree(T->ltree, data);
	}
	// �Ƚϣ�������ڽڵ㣬�����ұ�
	if (data > T->data) {
		return addTree(T->rtree, data);
	}
	// ���������ͬ�Ĺؼ��֣�����ʧ��
	if (data == T->data) {
		return 0;
	}
}

int main() {
	return 0;
}