#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 设置最大长度
#define MaxSize 10

// 构建线性表（静态顺序表）
typedef struct List {
	// 数据表
	int data[MaxSize];
	// 存储数据长度
	int len;
}List;

// 构建辅助线性表（静态顺序表）
typedef struct ListH {
	// 记录开始和结束位置
	int start, end;
}ListH;

// 实例化线性表
void InitList(List* L) {
	int i = 0;
	while (i < MaxSize) {
		L->data[i] = 0;
	}
	L->len = 0;
}

// 通过辅助表获取位置
ListH getMid(int num) {
	ListH LH;
	// 模拟辅助表返回数据
	LH.start = 10;
	LH.end = 12;
	return LH;
}

// 分块查找
int getList(List* L, int num) {
	// 获取辅助表内容
	ListH mid = getMid(num);
	// 在线性表查找
	while (mid.start <= mid.end) {
		if (mid.start == num) { return mid.start; }
		mid.start++;
	}
	return -1;
}

int main() {
	return 0;
}