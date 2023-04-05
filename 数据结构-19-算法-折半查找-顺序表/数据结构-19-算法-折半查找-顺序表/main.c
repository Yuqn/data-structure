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

// 实例化线性表
void InitList(List* L){
	int i = 0;
	while (i < MaxSize) {
		L->data[i] = 0;
	}
	L->len = 0;
}

// 折半查找，返回下标
int getList(List* L,int num) {
	// 定义左右索引，中间值
	int lk = 0, rk = L->len - 1, mid = 0;
	while (lk < rk) {
		// 获取中间值
		mid = (rk + lk) / 2;
		// 比较
		if (L->data[mid] == num) {
			return mid;
		}
		else if (L->data[mid] < num){
			lk = mid;
		}
		else if(L->data[mid] > num) {
			rk = mid;
		}
	}
	return -1;
}

int main() {
	return 0;
}