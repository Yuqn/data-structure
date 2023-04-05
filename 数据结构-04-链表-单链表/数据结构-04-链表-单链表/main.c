#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// ����������
typedef struct NodeList {
	int data;
	struct NodeList* next;
}NodeList;

// ��ʼ��������
void InitNodeList(NodeList * L) {
	// ���ٿռ�
	L = (NodeList*)malloc(sizeof(NodeList));
	if (L == NULL) {
		return 0;
	}
	// ��ͷ�ڵ�nextΪ�գ���ʾ����û������
	L->next = NULL;
}

// ���루��ͷ�ڵ㣩
int addList(NodeList * L,int address,int num) {
	// �ݴ��ַ
	NodeList* p = L;
	// ��¼��תλ����
	int i = 0;
	// �ж��Ƿ�λ�ô���1����Ϊ�Ǵ�ͷ�ڵ㣬ͷ��û��
	if (address < 1) {
		return -1;
	}
	// �������λ��Ϊ1������Ҫ�ı�ԭ��λ�ã�����Ҫ��
	while (L != NULL && i < address - 1) {
		p = L->next;
		i++;
	}
	// ���pָ����һ���������ڿ�
	if (p == NULL) {
		return -1;
	}
	// ����һ���µĿռ䲢ǰ����ϵ��������
	NodeList* newNode = (NodeList*)malloc(sizeof(NodeList));
	newNode->data = num;
	newNode->next = p->next;
	p->next = newNode;

	return 1;
}


int main() {
	NodeList L;
	InitNodeList(&L);
	int res = addList(&L,1,1);
	printf("���������%d",res);
	printf("���������%d", L.data);
	return 0;
}