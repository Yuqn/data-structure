#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 设置最大长度
#define MaxSize 10

// 定义结构
typedef struct List {
	int data[MaxSize];
	int len;
}List;

// 插入排序
int sortList(List* L) {
	int temp = -1;
	// 遍历线性表
	for (int i = 1; i < L->len; i++) {
		// 第二个开始，如果每一个比前面小，则交换位置
		if (L->data[i] < L->data[i - 1]) {
			for (int j = i - 1; j >= 0 && L->data[j] > L->data[i]; j--) {
				L->data[j + 1] = L->data[j];
			}
		}
	}
	return -1;
}


int main() {
	return 0;
}