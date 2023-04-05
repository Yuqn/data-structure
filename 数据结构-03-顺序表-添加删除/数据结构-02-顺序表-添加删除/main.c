#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 定义最大长度
#define MaxSize 10 

// 定义顺序表结构体
typedef struct {
	int data[MaxSize]; // 数组大小
	int length; // 长度
}SqlList;

// 初始化顺序表
void InitList(SqlList* L) {
	int i = 0;
	while (i < MaxSize)
	{
		L->data[i] = 0;
		i++;
	}
	L->length = 0;

	for (int j = 0; j < MaxSize; j++) {
		printf("%d\n", L->data[j]);
	}
}

// 添加
int addList(SqlList *L, int address,int num) {
	for (int i = L->length; i > address; i--) {
		L->data[i] = L->data[i - 1];
	}
	L->data[address] = num;
	L->length += 1;
	return 0;
}

// 查找，按值
int setbufList(SqlList *L,int num) {
	for (int i = 0; i < L->length; i++) {
		if(L->data[i] == num) {
			return i;
		}
	}
	return -1;
}


int main() {
	SqlList L; // 创建顺序表
	InitList(&L); // 实例化顺序表
	addList(&L, 1, 1);
	for (int j = 0; j < MaxSize; j++) {
		printf("%d\n", L.data[j]);
	}
	int sy = setbufList(&L,1);
	printf("-----%d",sy);
	return 0;
}