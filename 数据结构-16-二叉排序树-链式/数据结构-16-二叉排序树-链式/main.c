#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 创建排序树结构
typedef struct Tree {
	int data;
	struct Tree* ltree, * rtree;
}Tree;

// 初始化
void InitTree(Tree* T) {
	T = (Tree*)malloc(sizeof(Tree));
	if (T == NULL) {
		return -1;
	}
	T->data = 0;
	T->ltree = NULL;
	T->rtree = NULL;
}

// 查找，二叉排序树左节点都是比右节点小
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

// 插入
int addTree(Tree* T,int data) {
	// 插入节点
	if (T == NULL) {
		// 开辟空间
		T = (Tree*)malloc(sizeof(Tree));
		if (T == NULL) { return -1; }
		T->data = data;
		T->ltree = T->rtree = NULL;
		return 1;
	}
	// 比较，如果小于节点，则在左边
	if (data < T->data) {
		return  addTree(T->ltree, data);
	}
	// 比较，如果大于节点，则在右边
	if (data > T->data) {
		return addTree(T->rtree, data);
	}
	// 如果存在相同的关键字，插入失败
	if (data == T->data) {
		return 0;
	}
}

int main() {
	return 0;
}