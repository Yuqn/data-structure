#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//�����ṹ
typedef struct TreeTwo {
	int data; // ����
	struct TreeTwo* lTree;
	struct TreeTwo* rTree; // �����ӽڵ�ָ��
}TreeTwo;

// ��ʼ��
void InitTree(TreeTwo* T) {
	// ���ٿռ�
	T = (TreeTwo*)malloc(sizeof(TreeTwo));
	// ���ʧ���˳�
	if (T == NULL) {
		return -1;
	}
	// ��ʼ�ڵ���һ��ָ��Ϊnull
	T->data = 1;
	T->lTree = NULL;
	T->rTree = NULL;
}

// ��������
int addTree(TreeTwo* T,int num) {
	// �����ڵ�
	TreeTwo* NewNode = (TreeTwo*)malloc(sizeof(TreeTwo));
	// ���ʧ���˳�
	if (NewNode == NULL) {
		return -1;
	}
	// ��ֵ
	NewNode->data = num;
	NewNode->lTree = NULL;
	NewNode->rTree = NULL;
	// ���ڵ��ַ�����ڸ��ڵ���
	T->lTree = NewNode;
	// ȷ���Ƿ��ڸ��ڵ��б����ӽڵ��ַ
	// printf("%p\n",T->lTree);
	// printf("%p\n", T->rTree);
	return 0;
}

int main() {
	TreeTwo T;
	InitTree(&T);
	addTree(&T, 2);
	return 0;
}