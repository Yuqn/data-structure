#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 设置最大节点数
#define MaxSize 10

// 创建二叉树结构（完全二叉树）
typedef struct TreeTwo {
	int data; // 节点数据元素
	int isNull; // 节点是否为空
}TreeTwo;

// 初始化
void InitTree(TreeTwo* T) {
	for (int i = 0; i < MaxSize; i++) {
		// 默认所有节点都是无子节点
		T[i].isNull = -1;
	}
}

int main() {
	TreeTwo t[MaxSize]; // 将每一个节点存在数组中，与以往存储方式不同
	InitTree(t);
	return 0;
}