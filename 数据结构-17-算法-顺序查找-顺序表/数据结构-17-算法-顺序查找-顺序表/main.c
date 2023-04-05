#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 设置最大长度
#define MaxSize 10

// 创建顺序表结构
typedef struct List {
	// 创建数组(这里以静态存储方式创建表，如果使用动态存储，则使用malloc函数开辟空间即可)
	int arr[MaxSize];
	// 记录数组长度
	int len;
}List;

// 实例化表
void InitList(List* L) {
	int i = 0;
	while (i<MaxSize)
	{
		L->arr[i] = 0;
	}
	L->len = 0;
}

// 添加数据
int AddList(List* L,int num) {
	/*
		根据需求定义
	*/
	return 0;
}

// 顺序查找算法
// 返回下标，失败返回-1
int getList(List* L, int num) {
	// 记录位置
	int i = 0;
	// 遍历表
	while (i < L->len)
	{
		// 如果找到，退出函数
		if (L->arr[i] == num) { return i; }
		i++;
	}
	return -1;
}

int main() {
	List L;
	InitList(&L);
	return 0;
}