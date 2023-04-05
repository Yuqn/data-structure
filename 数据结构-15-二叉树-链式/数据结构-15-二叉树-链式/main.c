#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//创建结构
typedef struct TreeTwo {
	int data; // 数据
	struct TreeTwo* lTree;
	struct TreeTwo* rTree; // 两个子节点指针
}TreeTwo;

// 初始化
void InitTree(TreeTwo* T) {
	// 开辟空间
	T = (TreeTwo*)malloc(sizeof(TreeTwo));
	// 如果失败退出
	if (T == NULL) {
		return -1;
	}
	// 初始节点下一个指针为null
	T->data = 1;
	T->lTree = NULL;
	T->rTree = NULL;
}

// 插入数据
int addTree(TreeTwo* T,int num) {
	// 创建节点
	TreeTwo* NewNode = (TreeTwo*)malloc(sizeof(TreeTwo));
	// 如果失败退出
	if (NewNode == NULL) {
		return -1;
	}
	// 赋值
	NewNode->data = num;
	NewNode->lTree = NULL;
	NewNode->rTree = NULL;
	// 将节点地址保存在父节点中
	T->lTree = NewNode;
	// 确定是否在父节点中保存子节点地址
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