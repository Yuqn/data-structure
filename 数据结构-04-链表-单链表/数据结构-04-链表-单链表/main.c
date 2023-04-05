#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 创建单链表
typedef struct NodeList {
	int data;
	struct NodeList* next;
}NodeList;

// 初始化单链表
void InitNodeList(NodeList * L) {
	// 开辟空间
	L = (NodeList*)malloc(sizeof(NodeList));
	if (L == NULL) {
		return 0;
	}
	// 带头节点next为空，表示后面没有数据
	L->next = NULL;
}

// 插入（带头节点）
int addList(NodeList * L,int address,int num) {
	// 暂存地址
	NodeList* p = L;
	// 记录跳转位置数
	int i = 0;
	// 判断是否位置大于1，因为是带头节点，头部没有
	if (address < 1) {
		return -1;
	}
	// 如果插入位置为1，则不需要改变原有位置，否则要改
	while (L != NULL && i < address - 1) {
		p = L->next;
		i++;
	}
	// 如果p指向下一个，则会存在空
	if (p == NULL) {
		return -1;
	}
	// 开辟一块新的空间并前后联系，成链表
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
	printf("添加链表结果%d",res);
	printf("添加链表结果%d", L.data);
	return 0;
}