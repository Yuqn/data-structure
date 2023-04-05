#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 设置链表结构（这里使用包含头结点的单链表）
typedef struct List {
	// 节点数据
	int data;
	// 指针
	struct List* next;
}List;

// 实例化链表
void InitList(List* L) {
	// 开辟空间，存放节点
	L = (List*)malloc(sizeof(List));
	// 判断是否有地址指向L
	if (L == NULL) { return ; }
	// 初始化链表，头结点尾指针指向空（或者自己）
	L->next = NULL;
}

// 查找算法
int getList(List* L, int num) {
	// 计算
	int i = 1;
	// 跳过头节点
	L = L->next;
	// 遍历每一个节点
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